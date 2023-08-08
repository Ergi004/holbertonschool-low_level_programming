#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - Creates a file
 * @filename: Input
 * @text_content: input
 * Return: file_r
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	int n = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		n = write(fd, text_content, length);
	}

	if (n == -1)
		return (-1);

	return (1);
}
