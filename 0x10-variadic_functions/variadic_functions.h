#ifndef VA_F
#define VA_F

/* Header file */
#include <stdarg.h>
#include <stdio.h>

/* Function prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);
#endif
