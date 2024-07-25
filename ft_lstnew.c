/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytolstob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:48:40 by ytolstob          #+#    #+#             */
/*   Updated: 2024/07/21 15:53:43 by ytolstob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*one;

	one = malloc(sizeof(struct s_list));
	if (!one)
		return (NULL);
	one->content = content;
	one->next = NULL;
	return (one);
}
