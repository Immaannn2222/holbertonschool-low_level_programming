#include "holberton.h"

/**
 * create_file - cretes a file
 * @filename: the file
 * @text_content: its content
 *
 * Return: depends
 */

int create_file(const char *filename, char *text_content)
{
int fd, i, n;
if (!filename)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (!text_content)
return (1);
for (i = 0; text_content[i] != '\0'; i++)
{
;
}
n = write(fd, text_content, i);
if (n == -1)
return (-1);
close(fd);
return (1);
}
