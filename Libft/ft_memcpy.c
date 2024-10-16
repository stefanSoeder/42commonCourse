/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:42:47 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/16 13:21:51 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src || (n == 0))
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dest);
}
