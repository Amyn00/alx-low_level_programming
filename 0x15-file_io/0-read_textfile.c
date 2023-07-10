#include "main.h"
/**
 * read_textfile - write a func that read text file and prints it to the POSIX
 * SO
 * @filename: input
 * @letters: input
 * Return: the actual num of letters if could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *f;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);
	f = malloc(sizeof(char) * letters);
	if (f == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, f, letters);
	w = write(STDOUT_FILENO, f, r);

	if (o == 1 || r == -1 || w != r)
	{
		free(f);
		return (0);
	}
	free(f);
	close(o);
	return (w);
}
