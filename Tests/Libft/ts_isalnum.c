/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:00:36 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/15 13:16:33 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ts_isalnum(int c)
{
	if ((((c >='0') && (c <= '9'))) || ((c >= 'A') && (c <= 'Z')) || (((c >= 'a') && (c <= 'z'))))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if(argc < 2)
		printf("Non _Valid argument\n");
	else if ((ts_isalnum(argv[1][0])) == 1)
		printf("Is AlNum\n");
	else
		printf("Not Alnum\n");
	return 0;
}
