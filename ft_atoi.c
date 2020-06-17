/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleann <mleann@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 12:29:45 by mleann            #+#    #+#             */
/*   Updated: 2020/05/06 20:35:42 by mleann           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *num)
{
	int			i;
	int			sign;
	long int	res;

	sign = 1;
	res = 0;
	i = 0;
	while (((num[i] >= 9 && num[i] <= 13) || num[i] == ' ') && num)
		i++;
	if (num[i] == '-')
		sign = -1;
	if (num[i] == '-' || num[i] == '+')
		i++;
	while (num[i] >= '0' && num[i] <= '9')
	{
		if ((res * 10) < res)
			return ((sign < 0) ? 0 : -1);
		res = res * 10 + (num[i++] - '0');
	}
	return ((int)(res * sign));
}
