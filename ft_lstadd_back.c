/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:54:30 by lpicques          #+#    #+#             */
/*   Updated: 2021/06/01 11:44:49 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (alst == NULL || new == NULL)
		return ;
	if (new)
	{
		if (*alst)
			ft_lstlast(*alst)->next = new;
		else
			*alst = new;
	}
}
