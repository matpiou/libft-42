/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpicques <lpicques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 11:35:39 by lpicques          #+#    #+#             */
/*   Updated: 2021/06/04 14:09:12 by lpicques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_nb(long nb)
{
	size_t		count;

	count = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
	{
		nb = nb * (-1);
		count++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

static void	ft_convert(char *str, long n, int size)
{
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	while (n > 0)
	{
		str[size] = (n % 10) + 48;
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	long		num;
	long		len;

	num = n;
	len = ft_len_nb(num);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (0);
	str[len--] = '\0';
	ft_convert(str, num, len);
	return (str);
}
