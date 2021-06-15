/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 09:28:08 by lpicques          #+#    #+#             */
/*   Updated: 2021/05/25 10:29:06 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;
	size_t	len;

	len = count * size;
	dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	ft_memset(dest, 0, len);
	return (dest);
}
