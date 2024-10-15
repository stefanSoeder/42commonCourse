/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:53:02 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/15 17:04:47 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ts_isascii(int c)
{
	if((c >= 0) && (c <= 127))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		printf("Non Valid argument\n");
	else if ((ts_isascii(argv[1][0])) == 1)
		printf("ISASCII!!!\n");
	else
		printf("Not ASCII\n");
}
