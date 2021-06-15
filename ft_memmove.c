/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:36:38 by lpicques          #+#    #+#             */
/*   Updated: 2021/05/31 12:05:39 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*s_src;
	unsigned char	*d_dest;

	s_src = (unsigned char *)src;
	d_dest = (unsigned char *)dest;
	if (dest > src)
	{
		while (len)
		{
			d_dest[len - 1] = s_src[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
