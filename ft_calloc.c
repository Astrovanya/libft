/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 20:51:33 by mleann            #+#    #+#             */
/*   Updated: 2020/05/05 21:14:37 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *ptr;

	ptr = malloc(num * size);
	if (ptr)
		ft_bzero(ptr, (num * size));
	return (ptr);
}
