/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <galpers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:29:43 by galpers           #+#    #+#             */
/*   Updated: 2022/03/28 13:37:42 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	isint(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, long int);
	if (res < 0)
	{
		res = -res;
		tab->len ++;
		ft_putchar('-');
	}
	ft_putnbr(res);
	if (res == 0)
		tab->len++;
	while (res != 0)
	{
		res = res / 10;
		tab->len ++;
	}
}

void	isdecint(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, int);
	ft_putbase10(res, tab);
}

void	ispercent(t_print *tab)
{
	ft_putchar('%');
	tab->len++;
}
