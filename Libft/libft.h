/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:14:54 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/19 09:32:32 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_printparams(int i, int cont, const char *inp, va_list ap);
int	ft_putlonghex(unsigned long nbr, char *base);
int	ft_hexpoint(unsigned long ptr);
int	ft_puthex(unsigned int nbr, char *base);
int	ft_putunsnbr(unsigned int nb);

#endif