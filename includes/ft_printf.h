/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <galpers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:35:00 by galpers           #+#    #+#             */
/*   Updated: 2022/03/28 13:35:04 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	va_list	args;
	int		len;
}		t_print;

void	ft_putbase10(unsigned int i, t_print *tab);
void	ft_puthexlow(unsigned int i, t_print *tab);
void	ft_puthexup(unsigned int i, t_print *tab);
void	ft_putpointer(unsigned long int i, t_print *tab);

int		ft_printf(const char *input, ...);
void	ispointer(t_print *tab);
void	ishexlow(t_print *tab);
void	ishexup(t_print *tab);
void	ischar(t_print *tab);
void	isint(t_print *tab);

void	isstring(t_print *tab);
char	*ft_strchr(const char *string, int searchedChar);

void	ft_putchar(char c);
void	ft_putnbr(long int nb);
void	ft_putstr(char *str);
void	isdecint(t_print *tab);
void	ispercent(t_print *tab);

char	*ft_strchr(const char *s, int c);

#endif