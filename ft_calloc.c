/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:27:28 by ytolstob          #+#    #+#             */
/*   Updated: 2024/06/25 20:49:56 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *ptr, int c, unsigned int n)
{
	unsigned char	*p;

	p = ptr;
	while (n > 0 && n--)
		*p++ = c;
	return (ptr);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;
	int	total;

	if (nmemb == 0 || size == 0)
		total = 1;
	else
		total = nmemb * size;
	dest = (char *)malloc(total);
	if (dest == NULL)
		return (NULL);	
	ft_memset(dest, 0, total);
	return ((void *)dest);
}
