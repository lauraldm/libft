/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:21:47 by llopez-d          #+#    #+#             */
/*   Updated: 2019/12/18 20:31:43 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)src;
	p2 = (unsigned char *)dst;
	if (p1 == 0 && p2 == 0)
		return (NULL);
	if (p1 > p2)
	{
		while (len-- > 0)
			*p2++ = *p1++;
	}
	else
	{
		while (len-- > 0)
			p2[len] = p1[len];
	}
	return (dst);
}
