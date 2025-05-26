/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:56:20 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/21 19:36:12 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*new;

	if (size && n > (size_t)-1 / size)
		return (NULL);
	new = malloc(n * size);
	if (!new)
		return (NULL);
	ft_bzero(new, n * size);
	return (new);
}
