/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 10:32:08 by lpicques          #+#    #+#             */
/*   Updated: 2021/06/04 15:26:33 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str_b;
	char	c_to_write;
	size_t	i;

	str_b = b;
	c_to_write = (char)c;
	i = 0;
	while (len > 0)
	{
		str_b[i] = c_to_write;
		i++;
		len--;
	}
	return (str_b);
}
