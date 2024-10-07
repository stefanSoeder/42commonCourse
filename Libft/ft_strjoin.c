/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:57:53 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/07 12:46:37 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinedstr;
	int	len_s1;
	int	len_s2;

	len_s1 = 0;
	len_s2 = 0;
	joinedstr = ft_calloc(((ft_strlen(s1) + ft_strlen(s2)) + 1), sizeof(char));
	if (!joinedstr)
		return (NULL);
	while (s1)
	{
		joinedstr[len_s1] = s1[len_s1];
		len_s1++;
	}
	while (s2)
		joinedstr[len_s1++] = s2[len_s2++];
	return (joinedstr);
}
