/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:56:26 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/16 18:56:38 by stemarti         ###   ########.fr       */
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
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		 i++;
	}
	return (dest);
}

int	main(void)
{
char  src[] = "Hola Mundo";  // Almacenada en un array modificable
	char    dest[20];              // Espacio suficiente para copiar datos
    size_t  n;

    n = 4;
    printf("Before ts_memcpy:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n\n", dest);
    
    ts_memcpy(dest, src, n);  // Copiamos 'n' bytes de src a dest
    
    dest[n] = '\0';  // Asegurarse de que el string esté terminado en '\0'
    
    printf("After ts_memcpy:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    
    return (0);
}
