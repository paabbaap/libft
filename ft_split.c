/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:54:47 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/24 13:42:28 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			j++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (j);
}

char	**free_array(char **arr, int x)
{
	int	i;

	i = 0;
	while (i <= x)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**litsplit(char **arr, char const *s, char c)
{
	int	i;
	int	x;
	int	start;

	i = 0;
	x = 0;
	start = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		arr[x] = ft_substr(s, start, i - start);
		if (arr[x] == NULL)
			return (free_array(arr, x));
		x++;
	}
	arr[x] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	return (litsplit(arr, s, c));
}
