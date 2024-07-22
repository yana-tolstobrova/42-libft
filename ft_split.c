/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:51:39 by ytolstob          #+#    #+#             */
/*   Updated: 2024/07/10 21:15:13 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	count_size(const char *str, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i] != 0)
	{
		while (str[i] != '\0' && str[i] != c)
		{
			i++;
			size++;
		}
		i++;
	}
	return (size);
}

int	strseplen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	*create_str(const char *str, char c)
{
	int		len;
	int		i;
	char	*res;

	i = 0;
	len = strseplen(str, c);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		index;
	char	**arr;

	i = 0;
	index = 0;
	arr = malloc(sizeof(char *) * (count_size(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			arr[index] = create_str(&s[i], c);
			i += strseplen(&s[i], c);
			index++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	arr[index] = 0;
	return (arr);
}
