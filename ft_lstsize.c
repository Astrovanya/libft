/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 13:17:59 by mleann            #+#    #+#             */
/*   Updated: 2020/05/05 20:49:22 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		result;
	t_list	*list_copy;

	result = 0;
	list_copy = lst;
	while (list_copy)
	{
		list_copy = list_copy->next;
		result++;
	}
	return (result);
}
