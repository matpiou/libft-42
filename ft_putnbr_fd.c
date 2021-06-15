/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:17:25 by lpicques          #+#    #+#             */
/*   Updated: 2021/05/25 15:35:58 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_positivenum(int num)
{
	if (num < 0)
		return (num * (-1));
	else
		return (num);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
		ft_putchar_fd('-', fd);
	nbr = ft_positivenum(n);
	if (nbr >= 10)
		ft_putnbr_fd((nbr / 10), fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}
