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
	ssize_t feed;

	if (filename == NULL)
		return (-1);

	feed = open(filename, O_CREAT | O_APPEND | O_WRONLY, 0600);
	if (feed == -1)
		return (-1);

	if (text_content != NULL)
		write(feed, text_content, strlen(text_content));

	return (1);
}
}
