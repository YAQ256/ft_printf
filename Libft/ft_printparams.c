/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printparams.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:17:13 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/11/14 11:48:23 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkparam(const char *inp, int i, int cont, va_list (ap))
{
	if (inp[i + 1] == '%')
		cont += ft_putchar('%');
	if (inp[i + 1] == 'c')
		cont += ft_putchar(va_arg(ap, int));
	if (inp[i + 1] == 's')
		cont += ft_putstr(va_arg(ap, char *));
	if (inp[i + 1] == 'p')
		cont += ft_hexpoint(va_arg(ap, size_t));
	if (inp[i + 1] == 'i' || inp[i + 1] == 'd')
		cont += ft_putnbr(va_arg(ap, int));
	if (inp[i + 1] == 'u')
		cont += ft_putunsnbr(va_arg(ap, unsigned int));
	if (inp[i + 1] == 'x')
		cont += ft_puthex(va_arg(ap, int), "0123456789abcdef");
	if (inp[i + 1] == 'X')
		cont += ft_puthex(va_arg(ap, int), "0123456789ABCDEF");
	return (cont);
}

int	ft_printparams(int i, int count, const char *inp, va_list argms)
{
	if (!inp)
		return (0);
	while (inp[i] != '\0')
	{
		if (inp[i] == '%')
		{
			count = ft_checkparam(inp, i, count, argms);
			i++;
		}
		else
			count += write(1, &inp[i], 1);
		i++;
	}
	return (count);
}
