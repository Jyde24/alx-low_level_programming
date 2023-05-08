#include "main.h"

/**
 * append_text_to_file - appens text at the end of a file
 * @filename: name of file
 * @text_content: null terminated string to add at end of file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t count_write;
	int feed;
	size_t x;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	feed = open(filename, O_WRONLY | O_APPEND);
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
