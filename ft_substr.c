/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzapata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 14:32:46 by ayzapata          #+#    #+#             */
/*   Updated: 2019/11/14 12:46:33 by ayzapata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dst;

	if (s == NULL)
		return (NULL);
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = start;
	j = 0;
	while (s[i] != '\0' && i < len + start && start < ft_strlen(s))
	{
		dst[j] = s[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
