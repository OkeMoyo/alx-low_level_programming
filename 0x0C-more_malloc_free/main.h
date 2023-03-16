#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H

void exit(int status);

void *calloc(size_t nmemb, size_t size);

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

int _putchar(char c);

void free(void *ptr);

void *malloc(size_t size);
#endif
