/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <arios-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 23:32:29 by arios-he          #+#    #+#             */
/*   Updated: 2023/12/13 13:53:13 by arios-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	while (size)
	{
		if (*str1 != *str2 || *str1 == '\0' || *str2 == '\0')
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
		str1++;
		str2++;
		size--;
	}
	return (0);
}
