/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:36:41 by ytolstob          #+#    #+#             */
/*   Updated: 2024/07/25 18:34:52 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	count_len(const char *str, const char *set)
{
	int		start;
	int		end;
	int		len;

	start = 0;
	end = ft_strlen(str) - 1;
	while (str[start] && find_set(str[start], set))
		start++;
	while (end >= start && find_set(str[end], set))
		end--;
	len = end - start + 1;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;
	int		len;

	i = 0;
	len = count_len(s1, set);
	while (s1 && find_set(s1[i], set))
		i++;
	res = ft_substr(s1, i, len);
	return (res);
}
