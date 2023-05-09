#include "main.h"

/**
 * check_elf - check if is an ELF file
 * @ehdr: input
 */
void check_elf(unsigned char *ehdr)
{
	int i = 0;

	for (; i < 4; i++)
		if (ehdr[i] != 127 && ehdr[i] != 'E'
				&& ehdr[i] != 'L' && ehdr[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: is NOT an ELF file\n");
			exit(98);
		}
}

/**
 * get_magic - print magic
 * @ehdr: input
 */
void get_magic(unsigned char *ehdr)
{
	int i = 0;

	printf("  Magic:   ");
	for (; i < EI_NIDENT; i++)
	{
		printf("%02x", ehdr[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * get_class - print class
 * @ehdr: input
 */
void get_class(unsigned char *ehdr)
{
	printf("  Class:                             ");
	switch (ehdr[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknow: %x>\n", ehdr[EI_CLASS]);
	}
}

/**
 * get_data - print data
 * @ehdr: input
 */
void get_data(unsigned char *ehdr)
{
	printf("  Data:                              ");
	switch (ehdr[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknow: %x>\n", ehdr[EI_DATA]);
	}
}

/**
 * get_version - print version
 * @ehdr: input
 */
void get_version(unsigned char *ehdr)
{
	printf("  Version:                           %d", ehdr[EI_VERSION]);
	switch (ehdr[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * get_osabi - print OS/ABI
 * @ehdr: input
 */
void get_osabi(unsigned char *ehdr)
{
	printf("  OS/ABI:                            ");
	switch (ehdr[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknow: %x>\n", ehdr[EI_OSABI]);
	}
}

/**
 * get_abi - print ABI
 * @ehdr: input
 */
void get_abi(unsigned char *ehdr)
{
	printf("  ABI Version:                       %d\n",
			ehdr[EI_ABIVERSION]);
}

/**
 * get_type - print type
 * @e_type: input
 * @ehdr: input
 */
void get_type(unsigned int e_type, unsigned char *ehdr)
{
	if (ehdr[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf(" Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknow: %x>\n", e_type);
	}
}

/**
 * get_entry - print entry
 * @e_entry: input
 * @ehdr: input
 */
void get_entry(unsigned long int e_entry, unsigned char *ehdr)
{
	printf(" Entry point address:               ");
	if (ehdr[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (ehdr[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - close ELF
 * @elf: input
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - write a prog that display the info contained in the ELF header at the
 * start of an ELF file
 * @argc: input
 * @argv: input
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *h;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, h, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(h);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(h->ehdr);
	printf("ELF Header:\n");
	get_magic(h->ehdr);
	get_class(h->ehdr);
	get_data(h->ehdr);
	get_version(h->ehdr);
	get_osabi(h->ehdr);
	get_abi(h->ehdr);
	get_type(h->e_type, h->ehdr);
	get_entry(h->e_entry, h->ehdr);
	free(h);
	close_elf(o);
	return (0);
}
