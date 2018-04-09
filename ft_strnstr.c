/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 19:52:04 by ntai              #+#    #+#             */
/*   Updated: 2018/03/27 23:12:42 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns location of needle in haystack.
** Must be needle must be exact same.
** However, the function  can only compare
** up to len amount of times between
** needle and haystack when they are
** the same.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *p_haystack;
	char *p_needle;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0' && len > 0)
	{
		p_needle = (char *)needle;
		p_haystack = (char *)haystack;
		while (*p_haystack == *p_needle && *p_needle != '\0'
		&& len > 0)
		{
			++p_haystack;
			++p_needle;
			--len;
		}
		if (*p_needle == '\0')
			return ((char*)haystack);
		++haystack;
	}
	return (NULL);
}
