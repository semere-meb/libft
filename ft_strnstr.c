/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:57:49 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/23 17:54:43 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	size_t	needle_size;

	i = 0;
	needle_size = ft_strlen(needle);
	while (haystack[i])
	{
		if (ft_strncmp(haystack + i, needle, needle_size) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
