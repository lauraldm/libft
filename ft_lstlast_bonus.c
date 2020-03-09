/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 13:40:08 by llopez-d          #+#    #+#             */
/*   Updated: 2019/12/18 20:31:13 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *str;

	if (lst == NULL)
		return (NULL);
	else
		str = lst;
	while (str->next != NULL)
		str = str->next;
	lst = str;
	return (lst);
}
