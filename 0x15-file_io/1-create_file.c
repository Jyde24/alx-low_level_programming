#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: null-terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	size_t x = 0;
	ssize_t count_write;
	int feed;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		feed = open(filename, O_CREAT, 0600);
		if (feed == -1)
			return (-1);
		return (1);
	}
	feed = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (feed == -1)
		return (-1);
	while (text_content[x] != 0)
		x = x + 1;
	count_write = write(feed, text_content, x);
	if (count_write == -1)
		return (-1);
	close(feed);
	return (1);
}
