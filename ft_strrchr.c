/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:45:39 by mleann            #+#    #+#             */
/*   Updated: 2020/05/06 01:09:25 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t i;

	i = ft_strlen(str);
	while (i > 0 && str[i] != ch)
		i--;
	if (str[i] == ch)
		return ((char *)str + i);
	else
		return (NULL);
}
