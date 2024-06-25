/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:47:50 by ytolstob          #+#    #+#             */
/*   Updated: 2024/06/25 19:08:48 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char	*d;
	char	*s;
	char	*tmp[n];
	int	i;
	int	j;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	j = 0;
	while (i < n)
	{
		tmp[i] = s[i];
		i++;
	}
	while (j < n)
	{
		d[i] = tmp[i];
		i++;
	}
	return (dest);
}
