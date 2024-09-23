/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:09:38 by stemarti          #+#    #+#             */
/*   Updated: 2024/09/18 16:17:56 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_isalpha(int c)
{
	if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (0);
	else
		return (1);
}

/*int main(int argc, char **argv)
{
    if (argc == 2)
    {
        if (ft_isalpha(argv[1][0]))
            write(1, "Alphabetic\n", 11);
        else
            write(1, "Non-alphabetic\n", 15);
    }
    else
        write(1, "NULL\n", 5);

    return 0;
}*/
