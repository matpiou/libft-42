/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 09:33:57 by lpicques          #+#    #+#             */
/*   Updated: 2021/05/31 12:25:03 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int car)
{
	int	len;

	len = ft_strlen(str) - 1;
	if ((char)car == '\0')
		return ((char *)str + len + 1);
	while (len >= 0)
	{
		if (str[len] == (char)car)
			return ((char *)str + len);
		len--;
	}
	return (NULL);
}
