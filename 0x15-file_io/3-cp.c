#include "holberton.h"
/**
 * main - copies the content of a file to another
 * @argc: number of arguments
 * @argv: content of the argumens
 *
 * Return: 0
 */


int main (int argc, char *argv[])
{
int file_to, file_from;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
return (0);
}