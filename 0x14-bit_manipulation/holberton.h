#ifndef BIT_MAN
#define BIT_MAN
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);




#endif
