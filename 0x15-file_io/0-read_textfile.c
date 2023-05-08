#include "main.h"
/**
 * read_textfile - Reads a text file and prints iti to the POSIX stdout
 * @filename: text file to read
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buff;
	ssize_t countrd = 0;
	ssize_t countwrt = 0;


	if (filename == NULL)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(buff);
		return (0);
	}
	countrd = read(f, buff, letters);
	if (countrd == -1)
	{
		free(buff);
		close(f);
		return (0);
	}
	countwrt = write(STDOUT_FILENO, buff, countrd);
	if (countwrt == -1)
	{
		free(buff);
		close(f);
		return (0);
	}
	close(f);
	free(buff);
	return (countwrt);
}
