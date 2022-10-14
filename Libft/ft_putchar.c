/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:38:53 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/14 15:35:13 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_putchar() writes a single character to the standard output
 * 
 * @param c the character to print
 * 
 * @return The number of bytes written to the standard output.
 */
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
