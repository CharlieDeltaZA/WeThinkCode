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

#endif
