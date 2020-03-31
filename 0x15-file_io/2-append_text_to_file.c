#include "holberton.h"
/**
 * append_text_to_file - appends text to the end pf af file
 * @filename: the file
 * @text_content: the appended text
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, n;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (!text_content && fd == 1)
return (1);
else
return (-1);
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
