/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 22:38:11 by ntai              #+#    #+#             */
/*   Updated: 2018/04/14 22:46:08 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** GOAL:
** return a new string that combines 2 original
** strings together.
**
** The -1 at the end before the return is needed
** so the pointer goes back to the first location.
** Without it, the pointer goes out of bounds.
*/

// char			*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*new_string;
// 	int		new_string_len;

// 	new_string_len = 0;
// 	if (!s1 || !s2)
// 		return (NULL);
// 	new_string_len = ft_strlen(s1) + ft_strlen(s2) + 1;
// 	new_string = ft_strnew(new_string_len);
// 	if (!new_string)
// 		return (NULL);
// 	while (*s1)
// 		*new_string++ = *s1++;
// 	while (*s2)
// 		*new_string++ = *s2++;
// 	*new_string = '\0';
// 	new_string -= new_string_len - 1;
// 	return (new_string);
// }

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;

	if (!s1 || !s2)
		return (NULL);
	new_string = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_string)
		return (NULL);
	ft_strcpy(new_string, s1);
	ft_strcat(new_string, s2);
	return (new_string);
}
