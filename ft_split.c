/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 20:50:23 by llopez-d          #+#    #+#             */
/*   Updated: 2019/12/18 19:11:17 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	n_words;

	i = 0;
	n_words = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue;
		}
		n_words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n_words);
}

static int	ft_size_next_word(char const *s, char c, int i)
{
	int	size;

	while (s[i] == c && s[i])
		i++;
	size = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (size);
		size++;
		i++;
	}
	return (size);
}

static int	ft_save_word(char *word, char const *s, char c, int i)
{
	int j;

	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			word[j] = '\0';
			return (i);
		}
		word[j] = s[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		total;

	if (s == NULL)
		return (NULL);
	total = ft_count_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (total + 1))))
		return (NULL);
	tab[total] = NULL;
	i = 0;
	j = 0;
	while (j < total)
	{
		if (!(tab[j] = (char *)malloc(sizeof(char)
			* ft_size_next_word(s, c, i) + 1)))
			return (NULL);
		i = ft_save_word(tab[j], s, c, i);
		j++;
	}
	return (tab);
}
