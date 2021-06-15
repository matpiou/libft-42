/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:20:49 by lpicques          #+#    #+#             */
/*   Updated: 2021/06/04 10:20:25 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcpy(t_list *lst)
{
	t_list	*dst;
	t_list	*curr;

	if (!lst)
		return (0);
	dst = ft_lstnew(NULL);
	if (!dst)
		return (0);
	dst->content = lst->content;
	curr = lst->next;
	while (curr)
	{
		ft_lstadd_back(&dst, ft_lstnew(curr->content));
		curr = curr->next;
	}
	return (dst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*curr;
	t_list	*dst;

	if (!lst || !f)
		return (0);
	dst = ft_lstcpy(lst);
	if (!dst)
		return (0);
	begin = dst;
	curr = lst;
	while (curr)
	{
		dst->content = (*f)(curr->content);
		if (!dst->content)
		{
			ft_lstclear(&dst, del);
			return (0);
		}
		dst = dst->next;
		curr = curr->next;
	}
	return (begin);
}
