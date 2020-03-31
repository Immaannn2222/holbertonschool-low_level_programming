#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: number of the letters
 *
 * Return: the actual number of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t n;
int fd, m;
char *arr;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
arr = malloc(letters * sizeof(char));
m = read(fd, arr, letters);
if (m == -1)
return (0);
n = write(STDOUT_FILENO, arr, m);
if (n == -1)
return (0);
close(fd);
return (n);
}
