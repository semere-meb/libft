/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:01:51 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/26 02:14:43 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*create_str(char *chars, size_t start, size_t buffer_size)
{
	size_t	index;
	char	*new;

	index = 0;
	new = malloc(buffer_size - start + 1);
	if (!new)
		return (NULL);
	while (start < buffer_size)
		new[index++] = chars[start++];
	new[index] = '\0';
	return (new);
}

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the
 * integer received as an argument. Negative numbers must be handled.
 *
 * @param n the integer to convert.
 * @return The string representing the integer. NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	long	nb;
	char	chars[11];
	size_t	i;
	int		is_negative;

	nb = (long)n;
	i = 0;
	is_negative = 0;
	while (i < 11)
		chars[i++] = '\0';
	if (!nb)
		chars[--i] = '0';
	if (nb < 0)
	{
		nb *= -1;
		is_negative = 1;
	}
	while (nb)
	{
		chars[--i] = '0' + (nb % 10);
		nb /= 10;
	}
	if (is_negative)
		chars[--i] = '-';
	return (create_str(chars, i, 11));
}
