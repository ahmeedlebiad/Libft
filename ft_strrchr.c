/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebiad <alebiad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:15:10 by username          #+#    #+#             */
/*   Updated: 2026/10/16 17:35:57 by alebiad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == (char) c)
			j = i;
		i++;
	}
	if ((char) c == '\0')
		return ((char *)(&s[i]));
	if (j == -1)
		return (NULL);
	return ((char *)(&s[j]));
}
