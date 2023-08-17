#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 *@filename: name of the file
 *@letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int feed;
	char *buff;
	ssize_t read_out, write_out;

	if (!filename)
		return (0);

	buff = malloc(letters * sizeof(char) + 1);
	if (!buff)
		return (0);
	feed = open(filename, O_RDONLY);
	if (feed == -1)
	{
		free(buff);
		return (0);
	}
	read_out = read(feed, buff, letters);
	if (read_out == -1)
	{
		free(buff);
		close(feed);
		return (0);
	}
	write_out = write(STDOUT_FILENO, buff, read_out);
	if (write_out == -1)
	{
		free(buff);
		close(feed);
		return (0);
	}
	free(buff);
	close(feed);
	return (write_out);
}
