/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:09:40 by lpicques          #+#    #+#             */
/*   Updated: 2021/06/04 15:46:03 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char unsigned	*s_src;
	char unsigned	*d_dest;
	size_t			i;

	if (!n || dest == src)
		return (dest);
	s_src = (unsigned char *)src;
	d_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		d_dest[i] = s_src[i];
		i++;
	}
	return (dest);
}
