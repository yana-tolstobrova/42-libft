/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:19:30 by ytolstob          #+#    #+#             */
/*   Updated: 2024/07/21 15:38:21 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
	{
		f(i, s[i]);
		i++;
	}
}
