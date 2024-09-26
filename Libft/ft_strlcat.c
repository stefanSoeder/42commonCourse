/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:33:38 by stemarti          #+#    #+#             */
/*   Updated: 2024/09/26 13:28:54 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const int	b = ft_strlen(dst);
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(dst[i] != '\0')
		i++;
	while((src[j] != '\0') && (j < size))
	{	
		dst[i + 1] = src [j];
		j++;
	}
	return ((b + (ft_strlen(src - size))));
}
