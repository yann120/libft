/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetitje <ypetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:00:39 by ypetitje          #+#    #+#             */
/*   Updated: 2018/11/08 13:39:03 by ypetitje         ###   ########.fr       */
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
char	*ft_strncpy(char *dest, char *src, size_t len);

#endif
