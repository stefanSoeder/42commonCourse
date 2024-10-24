/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:53:03 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/24 12:11:59 by soeder85         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int					len;
	unsigned long long	addr;

	len = 0;
	addr = (unsigned long long)ptr;
	if (!ptr)
	{
		len += ft_puts("(nil)");
		return (len);
	}
	len += ft_puts("0x");
	len += ft_puthex(addr, 0);
	return (len);
}
