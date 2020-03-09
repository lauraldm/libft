/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 17:00:39 by llopez-d          #+#    #+#             */
/*   Updated: 2019/12/18 21:21:48 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *now;
	t_list *after;

	now = *lst;
	while (now)
	{
		after = now->next;
		del(now->content);
		free(now);
		now = after;
	}
	*lst = NULL;
}
