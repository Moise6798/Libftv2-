/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:07:47 by notzenbe          #+#    #+#             */
/*   Updated: 2023/10/19 14:46:39 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

void	ft_bzero(void *ptr, size_t num);

void	*ft_memset(void *ptr, int value, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *memorystr, int searchc, size_t size);
void	*ft_calloc(size_t elemcount, size_t elemsize);

int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isascii(int i);
int		ft_isprint(int i);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_atoi(const char *str);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

char	*ft_strchr(const char *str, int searchc);
char	*ft_strrchr(const char *str, int searchc);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *source);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif