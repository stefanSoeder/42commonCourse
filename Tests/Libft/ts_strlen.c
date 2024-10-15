/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ts_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:22:04 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/15 17:31:57 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ts_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	else
		printf("%ld\n", ts_strlen(argv[1]));
}
