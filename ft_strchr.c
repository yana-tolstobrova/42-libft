/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:08:16 by ytolstob          #+#    #+#             */
/*   Updated: 2024/06/25 19:14:41 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	srch;

	i = 0;
	str = (char *)s;
	srch = (char)c;
	while (str[i] != srch)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (str + i);
}
