/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:57:02 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/27 17:18:00 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*m1;
	unsigned char	*m2;

	i = 0;
	m1 = (unsigned char *)s1;
	m2 = (unsigned char *)s2;
	while (i < n)
	{
		if (m1[i] != m2[i])
			return (m1[i] - m2[i]);
		i++;
	}
	return (0);
}
