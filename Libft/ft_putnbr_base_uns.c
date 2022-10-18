/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_uns.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:01:06 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/18 13:01:49 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes an unsigned int and a base, and prints the unsigned int in the base
 * 
 * @param nbr the number to be converted
 * @param base the base to convert to
 * 
 * @return The number of characters printed.
 */
int	ft_putnbr_base_uns(unsigned int nbr, char *base)
{
	int	nbr_final[100];
	int	prnt[3];

	prnt[0] = 0;
	prnt[1] = 0;
	prnt[2] = 0;
	if (ft_checkbase(base))
	{
		if (nbr == 0)
			prnt[2] += ft_putchar('0');
		while (base[prnt[1]])
			prnt[1]++;
		while (nbr)
		{
			nbr_final[prnt[0]] = nbr % prnt[1];
			nbr = nbr / prnt[1];
			prnt[0]++;
		}
		while (--prnt[0] >= 0)
			prnt[2] += ft_putchar(base[nbr_final[prnt[0]]]);
	}
	return (prnt[2]);
}
