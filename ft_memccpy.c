/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 13:03:07 by mleann            #+#    #+#             */
/*   Updated: 2020/05/07 18:17:57 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*src_copy;
	unsigned char	*dest_copy;
	size_t			i;

	i = 0;
	src_copy = (unsigned char *)src;
	dest_copy = (unsigned char *)dest;
	while (n > i)
	{
		dest_copy[i] = src_copy[i];
		if (src_copy[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
