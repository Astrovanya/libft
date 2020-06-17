/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:33:10 by mleann            #+#    #+#             */
/*   Updated: 2020/05/05 23:22:28 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *)str + i);
		else
			i++;
	}
	if (ch == '\0')
		return ((char *)str + i);
	return (NULL);
}
