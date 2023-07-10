#include "main.h"
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: arguments
 * Return: 1 on success , exit 97, 98, 99, 100 on error
 */
int main(int ac, char **av)
{
	int close_status, close_status2, read_count, write_count, feed, feed2;
	char buffer[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	feed = open(av[1], O_RDONLY);
	if (feed == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	feed2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (feed2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((read_count = read(feed, buffer, BUFSIZ)) > 0)
	{
		write_count = (write(feed2, buffer, read_count));
		if (write_count != read_count)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (read_count == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	close_status = close(feed);
	if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close feed %d\n", feed), exit(100);
	close_status2 = close(feed2);
	if (close_status2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close feed %d\n", feed2), exit(100);
	return (0);
}
