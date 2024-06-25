/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:35:26 by ytolstob          #+#    #+#             */
/*   Updated: 2024/06/25 19:09:32 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
