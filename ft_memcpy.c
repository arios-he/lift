/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 00:20:28 by arios-he          #+#    #+#             */
/*   Updated: 2023/12/12 20:02:06 by arios-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;

	if (dest != NULL || src != NULL)
	{
		ptr_dest = dest;
		ptr_src = src;
		while (n--)
		{
			*ptr_dest = *ptr_src;
			ptr_dest++;
			ptr_src++;
		}
		return (dest);
	}
	else
		return (NULL);
}
