/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:30:28 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/19 09:30:37 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It prints an unsigned int
 * 
 * @param nb the number to be printed
 * 
 * @return The number of characters printed.
 */
int	ft_putunsnbr(unsigned int nb)
{
	unsigned int	nbr;

	nbr = 0;
	if (nb >= 10)
	{
		nbr += ft_putunsnbr(nb / 10);
		nbr += ft_putunsnbr(nb % 10);
	}
	else
		nbr += ft_putchar(nb + '0');
	return (nbr);
}
