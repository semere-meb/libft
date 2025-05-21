/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:12:13 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/21 15:44:55 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	while (dst[index])
	{
		index++;
	}
	count = 0;
	while (src[count])
	{
		dst[index] = src[count];
		count++;
		index++;
	}
	dst[index] = '\0';
	return (count);
}
