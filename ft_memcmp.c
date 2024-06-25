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

int	memcmp(const void *s1, const void *s2, size_t n)
{
	char	*first;
	char	*second;
	int	i;

	i = 0;
	first = (char*)s1;
	second = (char*)s2;
	while (i < n)
	{
		if (first[i] == second[i])
			i++;
		else
			return (first[i] - second[i]);
	}
	return (0);
}		
