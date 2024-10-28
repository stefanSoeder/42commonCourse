/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:41:37 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/28 11:20:06 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrprint(int n)
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
	if (num >= 10)
		len += ft_putnbrprint(num / 10);
	len += ft_putchar(num % 10 + '0');
	return (len);
}

/*int	main(void)
{
	int	n = 100;
	ft_putnbrprint(n);
}*/
