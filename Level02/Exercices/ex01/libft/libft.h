#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

void ft_putchar(char c);
void ft_putstr(char * str);
int ft_strlen( char * str);
void ft_toupper(char *str);
char ft_strcpy(char * src, char * dest);
int ft_strcomp(char * str1, char * str2);
int ft_strchr(char *str, char c);

#endif