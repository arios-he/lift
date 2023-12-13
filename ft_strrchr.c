/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 21:51:23 by arios-he          #+#    #+#             */
/*   Updated: 2023/12/12 22:06:51 by arios-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	char	ch;
	int		i;

	ch = c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (*str == '\0')
			return (NULL);
		i--;
	}
	return ((char *)str);
}
