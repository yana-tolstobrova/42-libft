/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:41:25 by ytolstob          #+#    #+#             */
/*   Updated: 2024/06/25 19:48:29 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*first;
	const unsigned char	*second;

	first = (const unsigned char *)s1;
	second = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*first == *second)
		{
			first++;
			second++;
			n--;
		}
		else
			return (*first - *second);
	}
	return (0);
}
