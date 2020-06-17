/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:33:18 by mleann            #+#    #+#             */
/*   Updated: 2020/05/06 13:06:28 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[j] && j < size)
		j++;
	while ((src[i]) && ((j + i + 1) < size))
	{
		dest[j + i] = src[i];
		i++;
	}
	if (j != size)
		dest[j + i] = '\0';
	return (j + ft_strlen(src));
}
