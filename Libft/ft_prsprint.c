/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:15:43 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/17 16:37:12 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkparam(const char *inp, int i, int cont, va_list (ap))
{
	if (inp[i + 1] == '%')
		cont += write(1, "%", 1);
	if (inp[i + 1] == 'c')
		cont += ft_putchar(va_arg(ap, int));
	if (inp[i + 1] == 's')
		cont += ft_putstr(va_arg(ap, char *));
	//if (inp[i + 1] == 'p')
	//	cont += ft_hexpoint(va_arg(ap, size_t));
	if (inp[i + 1] == 'i' || inp[i + 1] == 'd')
		cont += ft_putnbr(va_arg(ap, int));
	//if (inp[i + 1] == 'u')
	//	cont += ft_putunsnbr(va_arg(ap, unsigned int));
	//if (inp[i + 1] == 'x')
	//	cont += ft_putunsnbr_base(va_arg(ap, int), "0123456789abcdef");
	//if (inp[i + 1] == 'X')
	//	cont += ft_putunsnbr_base(va_arg(ap, int), "0123456789ABCDEF");
	return (cont);
}

int	ft_prsprint(int i, int cont, const char *inp, va_list ap)
{
	if (!inp)
		return (0);
	while (inp[i] != '\0')
	{
		if (inp[i] == '%')
		{
			cont = checkparam(inp, i, cont, ap);
			i++;
		}
		else
			cont += write(1, &inp[i], 1);
		i++;
	}
	return (cont);
}
