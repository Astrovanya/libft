/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 13:31:20 by mleann            #+#    #+#             */
/*   Updated: 2020/05/06 18:17:13 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *lst_copy;

	if (!lst || !new)
		return ;
	lst_copy = *lst;
	if (*lst)
	{
		while (lst_copy->next)
			lst_copy = lst_copy->next;
		lst_copy->next = new;
	}
	else
		*lst = new;
}
