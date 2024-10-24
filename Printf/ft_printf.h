/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:59:31 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/24 12:10:03 by soeder85         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>

int				ft_putchar(char c);
int				ft_puts(char *s);
int				ft_putptr(void *ptr);
int				ft_putnbrprint(int n);
int				ft_putunsignnbr(unsigned int n);
int				ft_puthex(unsigned long long int n, int cap);
int				ft_printf(char const *str, ...);

#endif
