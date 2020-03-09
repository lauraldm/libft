/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:06:31 by llopez-d          #+#    #+#             */
/*   Updated: 2019/12/18 20:27:06 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)src;
	p2 = (unsigned char *)dst;
	i = 0;
	if (!n || src == dst)
		return (dst);
	while (i < n)
	{
		p2[i] = p1[i];
		i++;
	}
	return (dst);
}
