/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <galpers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:30:10 by galpers           #+#    #+#             */
/*   Updated: 2022/03/28 13:36:27 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putbase10(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789";
	if (i >= 10)
	{
		ft_putbase10(i / 10, tab);
		ft_putbase10(i % 10, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}

void	ft_puthexlow(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		ft_puthexlow(i / 16, tab);
		ft_puthexlow(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}

void	ft_puthexup(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (i >= 16)
	{
		ft_puthexup(i / 16, tab);
		ft_puthexup(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}

void	ft_putpointer(unsigned long int i, t_print *tab)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		ft_putpointer(i / 16, tab);
		ft_putpointer(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}
