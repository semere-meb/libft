/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:27:28 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/24 17:57:11 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_member(const char ch, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

/**
 * @brief Allocates (with malloc(3)) and returns a copy of ’s1’ with the
 * characters specified in ’set’ removed from the beginning and the end of the
 * string.
 *
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (is_member(s1[start], set))
		start++;
	while (start <= end && is_member(s1[end], set))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	new = malloc(end - start + 2);
	if (!new)
		return (NULL);
	i = 0;
	while (start <= end)
		new[i++] = s1[start++];
	new[i] = '\0';
	return (new);
}
