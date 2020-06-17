/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 20:56:00 by mleann            #+#    #+#             */
/*   Updated: 2020/05/06 12:56:58 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *pt1;
	unsigned char *pt2;

	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*pt1 != *pt2)
			return (*pt1 - *pt2);
		pt1++;
		pt2++;
		n--;
	}
	return (0);
}
