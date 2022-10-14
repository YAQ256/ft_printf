/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:41:21 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/14 15:35:18 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes a string as a parameter and returns the length of the string
 * 
 * @param str This is the string that we are going to find the length of.
 * 
 * @return The length of the string.
 */
size_t	ft_strlen(const char *str)
{
	unsigned long	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
