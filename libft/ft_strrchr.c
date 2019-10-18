/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:49:12 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/17 17:24:53 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(*s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char)s[i]);
		i--;
	}
	if (c == '\0')
		return ((char)s[i]);
	return (NULL);
}

/*
** check backwards
*/