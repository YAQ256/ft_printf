/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:08:55 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/17 16:32:44 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *inp, ...)
{
	int		i;
	int		cont;
	va_list	ap;

	i = 0;
	cont = 0;
	va_start(ap, inp);
	cont += ft_prsprint(i, cont, inp, ap);
	va_end(ap);
	return (cont);
}
