/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:39:44 by lpicques          #+#    #+#             */
/*   Updated: 2021/06/04 09:46:04 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (destsize == 0)
		return (src_len);
	if (destsize < dest_len)
		return (src_len + destsize);
	while (i + dest_len < destsize - 1 && src[i])
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = 0;
	return (dest_len + src_len);
}
