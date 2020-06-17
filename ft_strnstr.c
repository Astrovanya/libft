/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:49:12 by mleann            #+#    #+#             */
/*   Updated: 2020/05/07 18:18:35 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*little)
		return ((char*)big);
	if (ft_strlen(big) < ft_strlen(little) || len < ft_strlen(little))
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j < len) && little[j])
			j++;
		if (!little[j])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
