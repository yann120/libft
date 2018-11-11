/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yann <yann@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:00:39 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/11 17:22:59 by yann             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>

int		ft_strlen(char *str);
int		ft_strcmp(char *str1, char *str2);
int		ft_strncmp(char *str1, char *str2, int n);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
int		ft_atoi(char *str);
int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strchr(const char *s, int c);
char    *strrchr (const char *s, int c);
char    *ft_strstr(char *str, char *to_find);
char    *ft_strnstr(char *str, int n, char *to_find);
char    *ft_strcat(char *dest, char *src);
char    *ft_strncat(char *dest, char *src, int n);
char    *ft_strlcat(char *dest, const char *src, int n);

#endif
