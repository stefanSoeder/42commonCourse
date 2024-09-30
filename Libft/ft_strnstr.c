/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:50:39 by stemarti          #+#    #+#             */
/*   Updated: 2024/09/30 19:00:36 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((ft_strlen(small)) == 0)
		return ((char *)big);
	if (len <= 0)
		return (0);
	while ((big[i] != '\0') && (i < len))
	{
		while ((big[i] == small[j]) && (i < len))
		{
			i++;
			j++;
			if (small[j] == '\0')
				return (&((char *)big)[i - j]);
		}
		j = 0;
		i++;
	}
	return (0);
}
