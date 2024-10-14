/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:56:27 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/14 17:04:16 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill(size_t len, char *str, long nbr);

char	*ft_itoa(int c)
{
	char	*str;
	long	nbr;
	size_t	len;

	len = 0;
	nbr = c;
	if (c <= 0)
	{
		nbr = -nbr;
		len = 1;
	}
	while (c)
	{
		c /= 10;
		len++;
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_fill(len, str, nbr);
	return (str);
}

static void	ft_fill(size_t len, char *str, long nbr)
{
	str[len--] = '\0';
	while (nbr > 0)
	{
		str[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if ((len == 0) && (str[1] == '\0'))
		str[len] = '0';
	else if ((len == 0) && (str[1] != '\0'))
		str[len] = '-';
}
