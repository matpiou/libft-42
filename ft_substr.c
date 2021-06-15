/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 11:17:02 by lpicques          #+#    #+#             */
/*   Updated: 2021/06/04 09:29:24 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		sub_str = (char *)malloc(1);
	else if (ft_strlen(s) - start < len)
		sub_str = (char *)malloc(ft_strlen(s) - start + 1);
	else
		sub_str = (char *)malloc(len + 1);
	if (sub_str == 0)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (s[i + start] && i < len)
		{
			sub_str[i] = s[i + start];
			i++;
		}
	}
	sub_str[i] = '\0';
	return (sub_str);
}
