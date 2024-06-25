/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:15:12 by ytolstob          #+#    #+#             */
/*   Updated: 2024/06/25 19:32:32 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;
	int	i;

	i = 0;
	tmp = NULL;
	while (s[i])
	{
		if (s[i] == c)
			tmp = &s[i];
		i++;
	}
	return (tmp);
}

int	main()
{
	{
		const char	*s = "Alewa";
		int	c = 'l';

		printf("%s", strrchr(s, c));

	}
	return 0;
}
