/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:28:58 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/19 09:29:34 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes an unsigned int and a string of characters, and prints the
 * unsigned int in hexadecimal form using the characters in the string
 * as the base
 *
 * @param nbr the number to be converted
 * @param base the base to convert to
 * 
 * @return The number of characters printed.
 */
int	ft_puthex(unsigned int nbr, char *base)
{
	int	nb_tab[100];
	int	i;
	int	hex;

	hex = 0;
	i = 0;
	if (nbr == 0)
		hex += ft_putchar('0');
	while (nbr)
	{
		nb_tab[i] = nbr % 16;
		nbr = nbr / 16;
		i++;
	}
	while (--i >= 0)
		hex += ft_putchar(base[nb_tab[i]]);
	return (hex);
}
