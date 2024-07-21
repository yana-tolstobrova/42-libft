/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:57:25 by ytolstob          #+#    #+#             */
/*   Updated: 2024/07/21 14:42:30 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	if (size > len)
	{
		while (i < size - len - 1 && src[i] != '\0')
		{
			dest[len + i] = src[i];
			i++;
		}
		dest[len + i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	if (size <= len)
		return (size + i);
	return (len + i);
}
