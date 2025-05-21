/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:37:42 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/21 15:56:49 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns a pointer to the last occurrence of character c in string s.
 * @param s The string to search.
 * @param c The character to locate (converted to unsigned char).
 * @return Pointer to the last occurrence of c, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	int				len;

	ch = (unsigned char)c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if ((unsigned char)s[len] == ch)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}
