/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzapata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:32:27 by ayzapata          #+#    #+#             */
/*   Updated: 2019/11/14 12:43:41 by ayzapata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	tmp_c;
	char	*tmp_s;
	int		i;

	tmp_c = (char)c;
	tmp_s = (char *)s;
	i = 0;
	while (tmp_s[i] != '\0' && tmp_s[i] != tmp_c)
	{
		i++;
	}
	if (tmp_s[i] == tmp_c)
	{
		return (&tmp_s[i]);
	}
	return (0);
}
