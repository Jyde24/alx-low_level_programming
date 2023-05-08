#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appens text at the end of a file
 * @filename: name of file
 * @text_content: null terminated string to add at end of file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int feed = 0;
	size_t x = 0;
	ssize_t count_write = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	feed = open(filename, O_WRONLY | O_APPEND);
	if (!feed)
		return (-1);

	while (text_content[x])
		x = x + 1;

	count_write = write(feed, text_content, x);
	if (count_write == -1)
		return (-1);

	close(feed);
	return (1);
}
