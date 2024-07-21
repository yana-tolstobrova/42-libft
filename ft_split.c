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

int	count_size(char *str, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i] != 0)
	{
		if (str[i] != '\0' && str[i] != char c)
			size++;
		i++;
	}
	return (size);
}

char	*create_str(char *str, char c)
{
	int		len;
	int		i;
	char	*res;

	i = 0;
	len = count_size(str, c);
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
	arr = malloc(sizeof(char *) * (count_size(str, c) + 1));
	if (arr == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			arr[index] = create_str(&str[i], c);
			index++;
			i += count_size(&str[i], c);
		}
		while (str[i] && str[i] != c)
			i++;
	}
	arr[index] = 0;
	return (arr);
}
