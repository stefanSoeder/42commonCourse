/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:46:30 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/24 11:31:37 by soeder85         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long num, int cap)
{
	int		len;
	char	hex_lower;
	char	hex_upper;

	len = 0;
	hex_lower = "0123456789abcdef"[num % 16];
	hex_upper = "0123456789ABCDEF"[num % 16];
	if (num >= 16)
		len += ft_puthex(num / 16, cap);
	if (!cap)
		len += ft_putchar(hex_lower);
	else
		len += ft_putchar(hex_upper);
	return (len);
}

int	main(void)
{
	ft_puthex(12345678913135, 0);
}
