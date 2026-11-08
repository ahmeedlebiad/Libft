/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebiad <alebiad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:49:12 by username          #+#    #+#             */
/*   Updated: 2026/11/06 22:46:02 by alebiad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			counter++;
		i++;
	}
	return (counter);
}

static size_t	word_len(const char *s, char c)
{
	size_t	j;

	j = 0;
	while (s[j] && s[j] != c)
		j++;
	return (j);
}

static void	free_all(char **out_put, size_t j)
{
	while (j > 0)
	{
		j--;
		free(out_put[j]);
	}
	free(out_put);
}

static int	fill_words(char **out_put, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		out_put[j] = ft_substr(s, i, word_len((char const *)(s + i), c));
		if (!out_put[j])
		{
			free_all(out_put, j);
			return (0);
		}
		i = i + word_len(s + i, c);
		j++;
	}
	out_put[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**out_put;
	size_t	words_counter;

	if (!s)
		return (NULL);
	words_counter = count_words(s, c);
	out_put = malloc(sizeof(char *) * (words_counter + 1));
	if (!out_put)
		return (NULL);
	if (!fill_words(out_put, s, c, words_counter))
		return (NULL);
	return (out_put);
}
