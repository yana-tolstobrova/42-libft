/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:27:04 by ytolstob          #+#    #+#             */
/*   Updated: 2024/06/26 18:35:02 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*res;

	i = 0;
	res = malloc(sizeof(char *) * len);
	if (res == NULL)
		return (NULL);
	while (start < len && s[start] != '\0')
	{
		res[i] = s[start];
		i++;
		start++;
	}
	return (res);
}
