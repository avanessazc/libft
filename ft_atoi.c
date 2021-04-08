/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzapata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:52:40 by ayzapata          #+#    #+#             */
/*   Updated: 2019/11/14 12:36:53 by ayzapata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	int				sig;
	unsigned int	num;

	sig = 1;
	i = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = sig * -1;
		i++;
	}
	num = 0;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if ((num == 2147483648 && sig == -1) || num <= 2147483647)
		return ((int)num * sig);
	if (num > 2147483648 && sig == -1)
		return (0);
	return (-1);
}
