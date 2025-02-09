/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:27:28 by ytolstob          #+#    #+#             */
/*   Updated: 2024/07/25 18:31:19 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;
	int		total;

	if (nmemb == 0 || size == 0)
		total = 0;
	else
		total = nmemb * size;
	dest = (char *)malloc(total);
	if (dest == NULL)
		return (NULL);
	ft_memset(dest, 0, total);
	return ((void *)dest);
}
