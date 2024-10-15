/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:09:38 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/15 12:10:59 by soeder85         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isalpha(int c)
{
	if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (0);
	else
		return (1);
}

int	main (int argc, char **argv)
{
	if (argc < 2)
		printf("Non valid argument\n" );
	else if ((ft_isalpha(argv[1][0])) == 0)
		printf("Not alpha\n" );
	else
		printf("Alpha\n" );
}
