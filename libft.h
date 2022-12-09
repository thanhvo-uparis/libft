/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:24:06 by tvo               #+#    #+#             */
/*   Updated: 2022/12/09 17:07:23 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list	*next;
}	t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memset(void *dest, int ch, size_t count);
void	ft_bzero(void *ptr, size_t count);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
size_t 	ft_strlcpy(char *dest, char *src, size_t destsize);
size_t	ft_strlen(char *str);
/* ft_strlcat */

int 	ft_toupper(int c);
int 	ft_tolower(int c);
char	*ft_strchr(char *str, int c);
char 	*ft_strrchr(char *str, int c);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
void 	*ft_memchr(void *s, int c, size_t n);
int 	ft_memcmp(void *s1, void *s2, size_t n);
char	*ft_strnstr(char *big, char *little, size_t len);
int 	ft_atoi(char *str);
void *ft_calloc(size_t count, size_t sz);
char	*ft_strdup(char *s);
char	*ft_substr(char *s, unsigned int start, size_t len);
char *ft_strjoin(char *s1, char *s2);
char *ft_strtrim(char *s1, char *set);
char **ft_split(char *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
/*ft_putnbr_fd */
#endif
