/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:24:23 by arios-he          #+#    #+#             */
/*   Updated: 2023/12/12 20:38:20 by arios-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	total;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	total = dest_len + src_len;
	if (size == 0 || dest_len >= size)
		return (size + src_len);
	if (src_len < size - dest_len)
		ft_memcpy (dest + dest_len, src, src_len +1);
	else
	{
		ft_memcpy (dest + dest_len, src, size - dest_len - 1);
		dest[size - 1] = '\0';
	}
	return (total);
}
