#include "main.h"
/**
* read_textfile - reads a text file and prints
* @filename: variable pointer
* @letters: size letters
* Return: the actual number of letters it could read and print, 0 otherwise
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, l, w;
	char *t;

	t = malloc(letters);
	if (t == NULL)
	return (0);
	if (filename == NULL)
	return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
	free(text);
	return (0);
}

	l = read(file, t, l);
	w = write(STDOUT_FILENO, t, l);

	close(file);
		return (w);
}
