/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 12:35:00 by mleann            #+#    #+#             */
/*   Updated: 2020/05/05 23:58:48 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dist, const void *src, size_t n)
{
	char	*dest_copy;
	char	*src_copy;
	size_t	i;

	i = 0;
	if (!dist && !src)
		return (NULL);
	dest_copy = (char *)dist;
	src_copy = (char *)src;
	while (i < n)
	{
		dest_copy[i] = src_copy[i];
		i++;
	}
	return ((void *)dest_copy);
}
