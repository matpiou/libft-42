/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 10:07:28 by lpicques          #+#    #+#             */
/*   Updated: 2021/05/31 09:33:50 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *to_check, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)to_check);
	while (to_check[i] != '\0' && i < len)
	{
		j = 0;
		if (to_check[i] == to_find[j])
		{
			while (to_find[j] && to_check[i + j]
				&& i + j < len
				&& to_check[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return ((char *)to_check + i);
		}
		i++;
	}
	return (NULL);
}
