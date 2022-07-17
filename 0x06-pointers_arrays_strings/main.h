#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

int _putchar(char c);
void print_number(int n);
void print_buffer(char *b, int size);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *n);
char *cap_string(char *n);
char *leet(char *n);
char *rot13(char *n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int r_index);

#endif /*MAIN_H*/
