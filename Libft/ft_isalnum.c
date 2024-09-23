/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:05:36 by stemarti          #+#    #+#             */
/*   Updated: 2024/09/23 14:34:04 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c)) || (ft_isdigit(c))
		return (1);
	else
		return(0);
}

int	main(int argc, char **argv)
{
	if (argc >=2)
	{
		if (ft_isalnum(argv[1][0])
			write(1, "ALNUM\n",6);
		else
			write(1, "NOT_ALNUM\n",10)
	}
}
