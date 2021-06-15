/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:17:16 by lpicques          #+#    #+#             */
/*   Updated: 2021/05/31 12:09:26 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_str;
	size_t			i;

	s_str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_str[i] == (unsigned char)c)
			return (s_str + i);
		i++;
	}
	return (NULL);
}
