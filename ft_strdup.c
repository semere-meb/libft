/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 19:14:18 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/21 19:28:41 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*new;

	size = ft_strlen(s);
	new = malloc(size + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s, size + 1);
	return (new);
}
