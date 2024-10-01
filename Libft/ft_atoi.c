/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:16:45 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/01 11:58:19 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] != '\0')
		if(ft_isspace(nptr[i]))
			i++;
		if((nptr[i] == '+') && (nptr[i + 1] != '-'))
			i++;
		if(nptr[i] == '-')
		{
			sing = -1;
			i++;
		}
		if((nptr[i] >= '0') && (nptr[i] <= '9'))


}

int	ft_isspace(int c)
{
	if ((c >= 9) || (c >= 13) || (c == 32)
		return (1);
	return (0);
}
	
