/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:15:43 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/18 13:02:54 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkparam(const char *inp, int i, int cont, va_list (ap))
{
	if (input[i + 1] == '%')
		count += write(1, "%", 1);
	if (input[i + 1] == 'c')
		count += ft_putchar(va_arg(argms, int));
	if (input[i + 1] == 's')
		count += ft_putstr(va_arg(argms, char *));
	if (input[i + 1] == 'p')
		count += ft_hexpoint(va_arg(argms, size_t));
	if (input[i + 1] == 'i' || input[i + 1] == 'd')
		count += ft_putnbr(va_arg(argms, int));
	if (input[i + 1] == 'u')
		count += ft_putnbr_uns(va_arg(argms, unsigned int));
	if (input[i + 1] == 'x')
		count += ft_putnbr_base_uns(va_arg(argms, int), "0123456789abcdef");
	if (input[i + 1] == 'X')
		count += ft_putnbr_base_uns(va_arg(argms, int), "0123456789ABCDEF");
	return (count);

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
