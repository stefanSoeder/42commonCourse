/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:35:29 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/11 17:38:16 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c);
static int 	word_len (const char *s,int start, char c);

char	**ft_split(char const *s, char c)
{
	char	**arrays_array;
	
	arrays_array = ft_calloc ((word_counter(s, c) + 1), sizeof(char *));
	int 	i;
	int	j;
	int	k;
	char	*new_word;

	i = 0;
	j = 0;
	k = 0;

	if (!s)
		return (NULL);
	while (s[i] != '\0') 
	{
		if (s[i] != c)
		{
			j = word_len (s, i, c);
			new_word = ft_substr(s, i, j);
			i += j;
			j = 0;
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
	while (s[i] != '\0')
	{
		if (((s[i] !=  c)) && ((i == 0) || (s[i - 1] == (char)c)))
			words++;
		i++;
	}
	return (words);
}

static int 	word_len (const char *s, int start, char c)
{
	int	len;

	len = 0;
	while ((s[start] != c) && (s[start] != '\0'))
	{
		len++;
		start++;
	}
	return (len);
}
