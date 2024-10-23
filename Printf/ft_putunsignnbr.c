/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:31:13 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/23 17:35:33 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsignnbr(unsigned int n)
{
	int	len;

	len = 0;
	if(n >= 10)
		len += ft_putunsignnbr(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
