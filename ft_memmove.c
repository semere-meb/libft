/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:49:32 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/21 15:47:06 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	temp;

	i = 0;
	while (n--)
	{
		temp = ((unsigned char *)src)[i];
		((unsigned char *)dest)[i] = temp;
		i++;
	}
	return (dest);
}
