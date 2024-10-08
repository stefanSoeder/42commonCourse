/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:35:29 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/08 17:10:10 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	*array_of_arrays;
	
	array_of_arrays = ft_calloc (words, 1);
	int 	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;

	while (s)
	{
		if ((s[i] == c) && (s[i + 1] != '\0'))
		{	
			char	*new_word;

			while ((s[i + j] != c) || (s[i + j] != '\0')
				j++;
			new_word = ft_substring(s, (ft_strlen(s)-(i + 1)), j);
			j = 0;
			if (array_of_arrays[k] == 0)
				array_of_arrays[k] = new_word;
			k++;
		}
		i++;
	}
	return (array_of_arrays);
}

static int	word_counter(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s)
	{
		if (((s[i] == (char) c)) && s[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}


