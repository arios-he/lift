/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <arios-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:40:40 by arios-he          #+#    #+#             */
/*   Updated: 2023/12/15 20:30:02 by arios-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stddef.h> // Necesario para size_t
# include <ctype.h>  // Necesario para funciones de clasificación de caracteres
# include <string.h>
# include <stdio.h>

// Declaraciones de tus funciones
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_toupper(int c);
int		ft_strncmp(const char *str1, const char *str2, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*strrchr(const char *str, int c);
char	*ft_strnstr(const char *str, const char *serch, size_t len);
#endif
