/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <galpers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:29:54 by galpers           #+#    #+#             */
/*   Updated: 2022/03/28 13:37:25 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ispointer(t_print *tab)
{
	unsigned long	res;

	res = va_arg(tab->args, unsigned long);
	ft_putstr("0x");
	tab->len += 2;
	ft_putpointer(res, tab);
}

void	ishexlow(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, unsigned int);
	ft_puthexlow(res, tab);
}

void	ishexup(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, unsigned int);
	ft_puthexup(res, tab);
}
