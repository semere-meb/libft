/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:12:13 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/24 15:19:43 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends upto size - 1 characters from the NUL-terminated string src to
 * dst, NUL=terminating the result.
 *
 * @param dst the buffer.
 * @param src Possibly the appended part of the string.
 * @param size The size of the buffer.
 * @return The total length of characters it tried to create.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dst_len == size)
		return (size + src_len);
	while (src[i] && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
