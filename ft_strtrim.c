/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 12:03:09 by lpicques          #+#    #+#             */
/*   Updated: 2021/06/04 12:24:14 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	first;
	size_t	last;
	size_t	i;

	first = 0;
	if (!s1 || !set)
		return (0);
	last = ft_strlen(s1);
	while (s1[first] != '\0' && ft_strchr(set, s1[first]))
		first++;
	while (last > first && ft_strchr(set, s1[last - 1]))
		last--;
	str = malloc(sizeof(*s1) * (last - first + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	while (first < last)
	{
		str[i] = s1[first];
		i++;
		first++;
	}
	str[i] = '\0';
	return (str);
}
