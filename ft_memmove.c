/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:28:43 by mleann            #+#    #+#             */
/*   Updated: 2020/05/06 13:02:52 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dest && !src)
		return (NULL);
	if (src > dest)
		while (n > ++i)
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
	else
		while (n--)
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	return (dest);
}
