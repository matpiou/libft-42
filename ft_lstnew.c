/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:56:19 by lpicques          #+#    #+#             */
/*   Updated: 2021/05/31 14:32:33 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*dest;

	dest = malloc(sizeof(*dest));
	if (dest == 0)
		return (NULL);
	dest->content = content;
	dest->next = NULL;
	return (dest);
}
