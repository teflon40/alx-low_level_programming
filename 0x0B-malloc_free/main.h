#ifndef MAIN_H
#define MAIN_H

#define True 1
#define False 0
#include <stdlib.h>
/* Function prototypes */
char *create_array(unsigned int, char);
char *_strdup(char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int, char **);
char **strtow(char *str);
int _putchar(char);

#endif
