/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 21:33:09 by ntai              #+#    #+#             */
/*   Updated: 2018/03/26 22:32:46 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *p_dst;
	unsigned char *p_src;

	p_dst = (unsigned char*)dst;
	p_src = (unsigned char*)src;
	while (*p_src != (unsigned char)c && n-- > 0)
	{
		*p_dst = *p_src;
		++p_dst;
		++p_src;
	}
	if (*p_src == (unsigned char)c)
	{
		*p_dst = (unsigned char)c;
		return (++p_dst);
	}
	return (NULL);
}
