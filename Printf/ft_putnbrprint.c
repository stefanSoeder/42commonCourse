/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:41:37 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/23 16:50:13 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrprint(int n)
{
	long	num;
	int		len;

	num = n;
	len = 0;
	if (num < 0)
	{
		len += ft_putchar('-');
		num = -num;
	}
	if (num > 10)
		len += ft_putnbrprint(num / 10);
	len += ft_putchar(num % 10 + '0');
	return (len);
}
