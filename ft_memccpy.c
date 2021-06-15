/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:08:56 by lpicques          #+#    #+#             */
/*   Updated: 2021/05/31 09:27:28 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s_src;
	unsigned char	*d_dest;
	size_t			i;

	s_src = (unsigned char *)src;
	d_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		d_dest[i] = s_src[i];
		if (s_src[i] == (unsigned char)c)
			return (&dest[i] + 1);
		i++;
	}
	return (NULL);
}
