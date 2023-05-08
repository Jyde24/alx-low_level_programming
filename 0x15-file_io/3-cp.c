#include "main.h"
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: arguments
 * Return: 1 on success , exit 97, 98, 99, 100 on error
 */
int main(int ac, char **av)
{
	int stat1, stat2, count_read, count_write, feed1, feed2;
	char buffer[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from"
				"file_to\n"), exit(97);
	feed = open(av[1], O_RDONLY);
	if (feed == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from"
				"file %s\n", av[1]), exit(98);
	feed2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (feed2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
			exit(99);
	while ((count_read = read(feed, buffer, BUFSIZ)) > 0)
	{
		count_write = (write(feed2, buffer, count_read));
		if (count_write != count_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					av[2]), exit(99);
	}
	if (count_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[1]), exit(98);
	stat1 = close(feed);
	if (stat1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", feed),
			exit(100);
	stat2 = close(feed2);
	if (stat2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", feed2),
			exit(100);
	return (0);
}
