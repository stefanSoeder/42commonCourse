/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:35:29 by stemarti          #+#    #+#             */
/*   Updated: 2024/10/15 11:14:12 by soeder85         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_counter(char const *s, char c);
static int	ft_word_len(const char *s, int start, char c);
static void	ft_free(char **arrays_array);
static void	ft_array_creator(char const *s, char **arrays_array, char c);

char	**ft_split(char const *s, char c)
{
	char	**arrays_array;

	if (!s)
		return (NULL);
	arrays_array = ft_calloc ((ft_word_counter(s, c) + 1), sizeof(char *));
	if (!arrays_array)
		return (NULL);
	ft_array_creator (s, arrays_array, c);
	return (arrays_array);
}

static int	ft_word_counter(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (((s[i] != c)) && ((i == 0) || (s[i - 1] == (char) c)))
			words++;
		i++;
	}
	return (words);
}

static int	ft_word_len(const char *s, int start, char c)
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

static void	ft_free(char **arrays_array)
{
	int	k;

	k = 0;
	if (!arrays_array)
		return ;
	while (arrays_array[k])
	{
		free(arrays_array[k]);
		k++;
	}
	free(arrays_array);
}

static void	ft_array_creator(char const *s, char **arrays_array, char c)
{
	int		i;
	int		k;
	char	*new_word;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			new_word = ft_substr(s, i, ft_word_len(s, i, c));
			if (!new_word)
			{
				ft_free(arrays_array);
				return ;
			}
			arrays_array[k] = new_word;
			k++;
			i += ft_word_len(s, i, c);
		}
		else
			i++;
	}
}
