/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:09:38 by arios-he          #+#    #+#             */
/*   Updated: 2023/12/13 14:21:26 by arios-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *serch, size_t len)
{
	size_t	need_l;

	need_l = len;
	if (need_l == '\0')
		return ((char *)str);
	need_l = ft_strlen(serch);
	while (*str && len-- >= need_l)
	{
		if (*str == *serch && strncmp (str, serch, need_l) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
