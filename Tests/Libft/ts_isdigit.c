/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soeder85 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:36:21 by soeder85          #+#    #+#             */
/*   Updated: 2024/10/15 12:57:15 by soeder85         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ts_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

int	main(int argc, char ** argv)
{
	if (argc < 2)
		printf("Non Valid Argument\n");
	else if ((ts_isdigit(argv[1][0])) == 1)
		printf("Digit\n");
	else
		printf("Non - Digit\n");
	return 0;
}
