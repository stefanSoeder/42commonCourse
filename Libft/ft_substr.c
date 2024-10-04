/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:55:12 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/04 16:02:24 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	sub = (char *)malloc(len + 1);
	if (((size_t)ft_strlen(s)) < (((size_t)start + len)))
	{
		sub = (char *)malloc(1);
		return (ft_strdup(""));
	}
	if (!sub)
		return (NULL);
	while (s[i])
	{
		if (i == (size_t)start)
		{
			while (j < len)
			{
				sub[j] = s[j + i];
				j++;
			}
			sub[j] = '\0';
		}
		i++;
	}
	return (sub);
}
