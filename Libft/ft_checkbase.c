/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:10:08 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/18 12:52:28 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It checks if the base is valid
 * 
 * @param base the string containing the base to be used.
 * 
 * @return the value of the base.
 */
int	ft_checkbase(char *base)
{
	int	i;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base [i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		i++;
	}
	return (1);
}