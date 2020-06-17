/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 21:08:25 by mleann            #+#    #+#             */
/*   Updated: 2020/05/06 13:30:12 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int i;

	if (dst && src)
	{
		i = 0;
		if (size == 0)
			return (ft_strlen(src));
		while (i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (ft_strlen(src));
	}
	return (0);
}
