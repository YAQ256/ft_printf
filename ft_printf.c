/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:08:55 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/19 15:29:50 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * The function ft_printf() takes a string and a variable number of arguments,
 * and
 * returns the number of characters printed
 * 
 * @param inp the string to be printed
 * 
 * @return The number of characters printed.
 */
int	ft_printf(char const *inp, ...)
{
	int		i;
	int		cont;
	va_list	ap;

	i = 0;
	cont = 0;
	va_start(ap, inp);
	cont += ft_printparams(i, cont, inp, ap);
	va_end(ap);
	return (cont);
}

/* #include <stdio.h>
int	main()
{
//	char	str[]= "es una secta";
//	int	a = 42;
//	char	c = 'Y';
	printf("%d", ft_printf(""));
} */