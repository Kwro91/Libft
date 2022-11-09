#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memcpy  (void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strdup(char *src);
int     ft_strlen(char *str);
char	*strnstr(const char *src, const char *to_find, size_t len);
char    ft_tolower(int c);
char    ft_toupper(int c);
#endif