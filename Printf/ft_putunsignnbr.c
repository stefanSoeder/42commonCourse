/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:31:13 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/24 12:17:56 by soeder85         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignnbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_putunsignnbr(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
