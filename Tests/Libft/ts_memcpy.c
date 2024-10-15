/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:56:26 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/15 21:29:44 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ts_memcpy(void *dest, const void *src, size_t n))
{
	size_t	i;

	i = 0;
	
	while (i < n)
	{
		(((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		 i++;
		 }
	return (dest)
}
