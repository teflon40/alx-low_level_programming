#ifndef MAIN_H
#define MAIN_H

#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/* Functions prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Helper functions prototypes */
int _strlen(const char *);

/* defining macros SUCCESS and FAILURE */
#ifndef SUCCESS
#define SUCCESS 1
#endif		/* end SUCCESS */

#ifndef FAILURE
#define FAILURE -1
#endif		/* end FAILURE */

#ifndef BUFFSIZE
#define BUFFSIZE 1024
#endif		/* end BUFFSIZE */


#endif		/* end MAIN_H */
