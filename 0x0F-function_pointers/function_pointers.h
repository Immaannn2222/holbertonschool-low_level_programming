#ifndef _FUNPOI_H
#define _FUNPOI_H
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
