/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:10:04 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/24 12:15:01 by soeder85         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_handler(const char format, va_list args);

int	ft_printf(char const *str, ...)
{
	va_list			args;
	int				i;
	int				len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			len += ft_putchar(str[i]);
		else
		{
			i++;
			if (str[i] != '\0')
				len += format_handler(str[i], args);
			else
				len += ft_putchar('%');
		}
		i++;
	}
	va_end(args);
	return (len);
}

static int	format_handler(const char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_puts(va_arg(args, char *));
	else if (format == 'p')
		len += ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbrprint(va_arg(args, int));
	else if (format == 'u')
		len += ft_putunsignnbr(va_arg(args, unsigned int));
	else if (format == 'x')
		len += ft_puthex(va_arg(args, unsigned int), 0);
	else if (format == 'X')
		len += ft_puthex(va_arg(args, unsigned int), 1);
	else if (format == '%')
		len += ft_putchar('%');
	else
	{
		len += ft_putchar('%');
		len += ft_putchar(format);
	}
	return (len);
}
