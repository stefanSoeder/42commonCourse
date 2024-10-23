/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:59:31 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/23 18:14:40 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>

void				ft_putchar(char c);
void				ft_puts(char *s);
void				ft_putptr(void *ptr);
void				ft_putnbrprint(int n);
void				ft_putunsignnbr(unsigned int n);
void				ft_puthex(unsigned long long int n, int cap);

#endif
