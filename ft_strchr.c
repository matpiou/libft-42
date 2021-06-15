/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:10:36 by lpicques          #+#    #+#             */
/*   Updated: 2021/05/31 09:31:23 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*marche;

	marche = (char *)s;
	while (*marche != '\0')
	{
		if (*marche == (char)c)
			return (marche);
		marche++;
	}
	if ((char)c == '\0')
		return (marche);
	return (NULL);
}
