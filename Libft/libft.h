/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:14:54 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/10/18 13:04:18 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(const char *str);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_prsprint(int i, int cont, const char *inp, va_list ap);
int		ft_checkbase(char *base);
int		ft_putnbr_base_unslng(unsigned long nbr, char *base);
int		ft_hexpoint(unsigned long pnt);
int		ft_putnbr_base_uns(unsigned int nbr, char *base);
int		ft_putnbr_uns(unsigned int n);

#endif