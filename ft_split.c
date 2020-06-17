/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 18:34:21 by mleann            #+#    #+#             */
/*   Updated: 2020/05/07 18:19:06 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	freestr(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	wordcount(const char *str, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i] != '\0' && str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else if (str[i] != '\0')
			i++;
	}
	return (count);
}

static int	wordlen(const char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s)
	{
		s++;
		len++;
	}
	return (len);
}

static char	**wordup(char **stm, const char *s, char c, int count)
{
	int i;
	int j;
	int len;

	i = 0;
	while (i < count)
	{
		while (*s == c && *s)
			s++;
		j = 0;
		len = wordlen(s, c);
		if (!(stm[i] = (char *)malloc(sizeof(char) * len + 1)))
		{
			freestr(stm);
			return (NULL);
		}
		while (j < len)
			stm[i][j++] = *s++;
		stm[i][j] = '\0';
		i++;
	}
	stm[i] = NULL;
	return (stm);
}

char		**ft_split(char const *s, char c)
{
	char	**stm;
	int		count;

	if (s)
	{
		count = wordcount(s, c);
		if (!(stm = (char **)malloc(sizeof(char *) * (count + 1))))
			return (NULL);
		return (wordup(stm, s, c, count));
	}
	return (NULL);
}
