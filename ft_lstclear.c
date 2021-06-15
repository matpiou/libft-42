/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:41:22 by lpicques          #+#    #+#             */
/*   Updated: 2021/06/01 12:03:03 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*liste;

	liste = *lst;
	while (liste)
	{
		tmp = liste->next;
		ft_lstdelone(liste, del);
		liste = tmp;
	}
	*lst = NULL;
}
