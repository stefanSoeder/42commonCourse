/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:50:39 by stemarti          #+#    #+#             */
/*   Updated: 2024/09/30 13:45:35 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if ((ft_strlen(small)) == 0)
		return (big);
	while (big[i] != '\0')
	{	
		if(big[i] == small[j])
		{
			while (big[i] == small[j])
				i++;
				j++;
			if (j = len)
				return ((&(char *)big)[i - j]);
		}
		j = 0;
	}
}
