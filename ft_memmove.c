/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:17:52 by arios-he          #+#    #+#             */
/*   Updated: 2023/12/12 20:23:47 by arios-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	if (dest != NULL || src != NULL)
	{
		if (dest > src && dest < src + n)
		{
			dest_ptr = dest;
			src_ptr = src;
			dest_ptr += n;
			src_ptr += n;
			while (n--)
				*(--dest_ptr) = *(--src_ptr);
		}
		else
		{
			dest_ptr = dest;
			src_ptr = src;
			while (n--)
				*dest_ptr++ = *src_ptr++;
		}
		return (dest);
	}
	else
		return (NULL);
}
