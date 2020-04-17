/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 00:34:06 by tlee              #+#    #+#             */
/*   Updated: 2020/04/17 00:34:07 by tlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

char	*ft_strcat(char *dst, const char *src);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncat(char *dst, char *src, size_t num);
char	*ft_strncpy(char *dst, const char *src, size_t num);
char	*ft_strstr(const char *str1, const char *str2);
void	ft_memdel(void **ap);
void	ft_putchar(char c);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char*));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
int		ft_count_digit(int n);
char	*ft_insert_nbr(char *arr, int n, int size);
char	*ft_strcut(char *str, char c);

#endif
