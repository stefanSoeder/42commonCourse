/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_isprintable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:08:16 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/15 17:13:33 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ts_isprintable(int c)
{
	if ((c >= 32) && (c <=126))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		printf("Non Valid\n");
	else if ((ts_isprintable(argv[1][0])) == 1)
		printf("PRINTABLE\n");
	else	
		printf("NON_PRINTABLE\n");
}
