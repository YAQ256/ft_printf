/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlonghex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:25:51 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/19 09:26:31 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes a long unsigned integer and a string of characters, and prints
 * the long unsigned integer in hexadecimal format using the characters in
 * the string as the base
 * 
 * @param nbr the number to be converted
 * @param base the base to convert to
 * 
 * @return The number of characters printed.
 */
int	ft_putlonghex(unsigned long nbr, char *base)
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
