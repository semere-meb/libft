/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 18:02:58 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/24 21:39:39 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter. The array must be ended
 * by a NULL pointer.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split. NULL if the
 * allocation fails.
 */
static int	calc_array_len(char const *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	index;

	start = 0;
	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
		{
			index++;
			start = i;
		}
	}
	return (index);
}

static char	*allocate_string(char const *s, int start, int end)
{
	char	*new;
	int		i;

	if (start > end)
		return (NULL);
	new = malloc((end - start + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (s[start] && start < end)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}

static void	free_array(char **array, size_t count)
{
	for (size_t i = 0; i < count; i++)
	{
		free(array[i]);
	}
	free(array);
}

static int	allocate_array(char **array, char const *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	index;

	start = 0;
	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
		{
			array[index] = allocate_string(s, start, i);
			if (!array[index])
			{
				free_array(array, index);
				return (-1);
			}
			index++;
			start = i;
		}
	}
	array[index] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		arr_len;
	char	**array;

	if (!s)
		return (NULL);
	arr_len = calc_array_len(s, c);
	array = malloc((arr_len + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (allocate_array(array, s, c) != 0)
	{
		return (NULL);
	}
	return (array);
}
