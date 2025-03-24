#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

void ft_putchar(char c);
void ft_putstr(char * str);
int ft_strlen( char * str);
void ft_toupper(char *str);
int ft_strchr(char *str, char c);
void ft_tolower(char *str);
char *ft_strcpy(char *dest, char *src);
char *ft_strcat(char *dest, char *src);
int ft_strcmp(char *str1, char *str2);

#endif