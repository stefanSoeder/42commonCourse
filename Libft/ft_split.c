/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:35:29 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/08 20:42:01 by soeder85         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c);
static int 	word_len (const char *s,char start, char c);

char	**ft_split(char const *s, char c)
{
	char	*arrays_array;
	
	arrays_array = ft_calloc ((word_counter(s, c) + 1), 1);
	int 	i;
	int	j;
	int	k;
	char	*new_word;

	i = 0;
	j = 0;
	k = 0;

	while (s != '\0') 
	{
		if (s[i] != c)
		{
			j = word_len (s, i, c)
			new_word = ft_substring(s, i, j);
			i + j;
			j = 0;
		}
		if ((s[i] == c) && (s[i + 1] != '\0'))
		{	
			char	*new_word;

			while ((s[i + j] != c) || (s[i + j] != '\0')
				j++;
			new_word = ft_substring(s, (ft_strlen(s)-(i + 1)), j);
			j = 1;
			if (arrays_array[k] == 0)
				arrays_array[k] = new_word;
			k++;
		}
		i++;
	}
	return (arrays_array);
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

static int 	word_len (const char *s,char start, char c)
{
	int	len;

	len = 0;
	while ((s[start] != c) || (s[start] != '\0'))
		len++;
	start++;
	return (len);
}
