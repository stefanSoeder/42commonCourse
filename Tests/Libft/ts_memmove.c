/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:26:54 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/16 19:50:10 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char 	*temp;

	i = 0;
	while ((i < n) && (n <= ft_strlen(dest)))
	{
		temp[i] = src[i];
		i++;		
	}
	
}
