/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 12:44:09 by lpicques          #+#    #+#             */
/*   Updated: 2021/05/25 13:05:23 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*str_b;
	size_t			i;

	str_b = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		str_b[i] = 0;
		i++;
	}
}
