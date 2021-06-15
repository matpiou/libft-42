/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 10:35:35 by lpicques          #+#    #+#             */
/*   Updated: 2021/06/04 15:28:29 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*s_one;
	unsigned const char	*s_two;
	size_t				i;

	s_one = (unsigned const char *)s1;
	s_two = (unsigned const char *)s2;
	i = 0;
	while (i < n)
	{
		if (s_one[i] != s_two[i])
			return (s_one[i] - s_two[i]);
		i++;
	}
	return (0);
}
