/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:50:11 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/15 19:29:36 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ts_memset(void *s, int c, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int	main(void)
{
	void	*s;
	int	c;
	size_t	n;
	int	i;

	i = 0;
	c = 6;
	n = 3;
	s = malloc(n);
	if(!s)
		return(0);
	ts_memset(s, c, n);
	while(i < n)
	{
		printf("%d\n",((unsigned char *)s)[i]);
		i++;
	}
	return (0);
}
