/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:56:26 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/16 10:56:12 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ts_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src || (n == 0))
		return (dest);
	while (i < n)
	{
		(((unsigned char *)dest)[i] = ((unsigned char *)src)[i]);
		 i++;
	}
	return (dest);
}

int	main(void)
{
	char	*src;
	char	*dest;
	size_t	n;

	src = "Hola Mundo";
	dest = "Palo";
	printf("Before ts_memcpy:\n");
    	printf("Source: %s\n", src);
    	printf("Destination: %s\n\n", dest);
	ts_memcpy(src, dest, b);
	printf("After ts_memcpy:\n");
    	printf("Source: %s\n", src);
    	printf("Destination: %s\n", dest);
	return (0);
}
