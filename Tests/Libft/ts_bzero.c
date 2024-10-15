/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:33:26 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/15 19:54:39 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ts_memset(void *s, int c, size_t n);

void	ts_bzero(void *s, size_t n)
{
	ts_memset(s, 0, n);
}

void    ts_memset(void *s, int c, size_t n)
{
        size_t  i;

        i = 0;
        while (i < n)
        {
                ((unsigned char *)s)[i] = (unsigned char)c;
                i++;
        }
        return (s);
}

void	main(void)
{
	void	*s;
	size_t	n;
	size_t	i;

	n = 5;
	i = 0;
	s = malloc(n);
	ts_bzero(s, n);
	while (i < n)
	{
		printf("%d",((unsigned char *)s)[i]);
		i++;
	}
}	
