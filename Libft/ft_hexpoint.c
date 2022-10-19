/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:28:02 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/19 09:28:11 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It prints a pointer in hexadecimal format
 * 
 * @param ptr the pointer to print
 * 
 * @return The number of characters printed.
 */
int	ft_hexpoint(unsigned long ptr)
{
	int	result;

	result = 0;
	result += write(1, "0x", 2);
	if (!ptr)
		result += write (1, "0", 1);
	else
		result += ft_putlonghex(ptr, "0123456789abcdef");
	return (result);
}
