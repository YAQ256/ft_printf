/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:42:49 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/14 17:09:12 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It writes a string to the standard output
 * 
 * @param s The string to print.
 * 
 * @return The number of characters printed.
 */
int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	len = ft_strlen(s);
	while (i < len)
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}
