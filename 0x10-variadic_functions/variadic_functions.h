<<<<<<< HEAD
#ifndef _VARIADIC_FUNCTIONS_
#define_VARIADIC_FUNCTIONS_

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...); int sum_them_all(const 
unsigned int n, ...); int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
=======
#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
>>>>>>> fd7dd923f5ed40a8156a9c6c4ddcf57695139a24

#endif
