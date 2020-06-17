/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 17:10:27 by mleann            #+#    #+#             */
/*   Updated: 2020/05/07 18:20:57 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s + start);
	if (start > (unsigned int)str_len)
		return (NULL);
	str_len = (str_len < len ? str_len : len);
	substring = (char *)malloc((str_len + 1) * sizeof(char));
	if (!substring)
		return (0);
	ft_strlcpy(substring, s + start, str_len + 1);
	return (substring);
}
