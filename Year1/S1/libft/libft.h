#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

size_t	ft_strlen(const char *str);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
char    *ft_strcpy(char *dst, const char *src);
char    *ft_strncpy(char *dst, const char *src, size_t len);
char    *ft_strstr(const char *haystack, const char *needle);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_islower(int c);
int     ft_isupper(int c);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);

#endif
