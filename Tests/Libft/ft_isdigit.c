/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:16:03 by stemarti          #+#    #+#             */
/*   Updated: 2024/09/18 16:52:15 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}

/*int main(int argc, char **argv)
{
    if (argc == 2)
    {
        if (ft_isdigit(argv[1][0]))
            write(1, "Digit\n", 6);
        else
            write(1, "Non-digit\n", 10);
    }
    else
        write(1, "NULL\n", 5);

    return 0;
}*/
