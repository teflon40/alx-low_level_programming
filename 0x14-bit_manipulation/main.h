#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define Bit_Value(n, bit)	(((n) >> (bit)) & 0x1)
#define Bit_Width(n)		(sizeof(n) * 8)
#define Bit_ON(n, bit)		((n) | (1 << (bit)))
#define Bit_OFF(n, bit)		(Bit_Value(n, bit) ? ((n)^(1 << (bit))) : (n))
/* Function prototypes */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);
#endif
