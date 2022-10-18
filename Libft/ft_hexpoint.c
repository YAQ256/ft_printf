/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:57:21 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/18 12:58:01 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes an unsigned long and prints it in hexadecimal format
 * 
 * @param pnt the pointer to print
 * 
 * @return The number of characters printed.
 */
int	ft_hexpoint(unsigned long pnt)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	if (pnt != 0)
		count += ft_putnbr_base_unslng(pnt, "0123456789abcdef");
	else
		count += write (1, "0", 1);
	return (count);
}
