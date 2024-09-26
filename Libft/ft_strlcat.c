/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:33:38 by stemarti          #+#    #+#             */
/*   Updated: 2024/09/26 17:44:18 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	original_len;
	size_t	i;
	size_t	j;

	original_len = ft_strlen(dst);
	i = original_len;
	j = 0;
	if (size >= original_len)
	{
		while ((src[j] != '\0') && ((i <= (size - 1))))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return ((original_len + (ft_strlen(src))));
}
