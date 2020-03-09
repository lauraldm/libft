/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 19:00:32 by llopez-d          #+#    #+#             */
/*   Updated: 2019/12/18 20:52:49 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	k = 0;
	if (i <= dstsize)
		j = j + i;
	else
		j = j + dstsize;
	while (src[k] && i + 1 < dstsize)
	{
		dst[i] = src[k];
		k++;
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (j);
}
