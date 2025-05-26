/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:32:36 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/22 20:46:40 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of ’s1’ and ’s2’.
 *
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return The new string. NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*new;
	size_t	index;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1);
	size += ft_strlen(s2);
	new = malloc(size + 1);
	if (!new)
		return (NULL);
	i = 0;
	index = 0;
	while (s1[i])
		new[index++] = s1[i++];
	i = 0;
	while (s2[i])
		new[index++] = s2[i++];
	new[index] = '\0';
	return (new);
}
