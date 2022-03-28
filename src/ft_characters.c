/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_characters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <galpers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:36:39 by galpers           #+#    #+#             */
/*   Updated: 2022/03/28 13:36:59 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ischar(t_print *tab)
{
	char	res;

	res = va_arg(tab->args, unsigned int);
	tab->len += 1;
	ft_putchar(res);
}

void	isstring(t_print *tab)
{
	char	*res;
	int		i;

	res = va_arg(tab->args, char *);
	if (res == NULL)
	{
		ft_putstr("(null)");
		tab->len += 6;
		return ;
	}
	i = 0;
	while (res[i])
	{
		ft_putchar(res[i]);
		tab->len++;
		i++;
	}
}
