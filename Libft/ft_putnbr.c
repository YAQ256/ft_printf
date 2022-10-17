/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:43:29 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/17 16:33:56 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_putnbr() takes an integer as an argument and prints it to the standard
 * output
 * @param n the number to print
 * 
 * @return The number of characters printed.
 */
int	ft_putnbr(int n)
{
	unsigned int	nbr;

	nbr = 0;
	if (n > -2147483648 || n <= 2147483647)
	{
		if (n == -2147483648)
		{
			nbr += ft_putstr("-2");
			nbr += ft_putnbr(147483648);
		}
		else if (n > 9)
		{
			nbr += ft_putnbr(n / 10);
			nbr += ft_putnbr(n % 10);
		}
		else if (n < 0)
		{
			n = -n;
			nbr += ft_putchar('-');
			nbr += ft_putnbr(n);
		}
		else
			nbr += ft_putchar(n + '0');
	}
	return (nbr);
}
