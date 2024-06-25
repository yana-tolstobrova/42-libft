/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:03:27 by ytolstob          #+#    #+#             */
/*   Updated: 2024/06/25 20:23:58 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[i] == '\0')
		return (big);
	while(big[i] != '\0')
	{
		j = 0;
		while(big[i + j] == little[j] && big[i + j] != '\0' && j < len)
		{
			if(little[j + 1] == '\0' || (j + 1) > len)
				return (&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
