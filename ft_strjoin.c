/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebiad <alebiad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 23:26:11 by username          #+#    #+#             */
/*   Updated: 2026/11/06 22:45:44 by alebiad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	i;
	char	*joiner;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	i = 0;
	joiner = malloc(sizeof(char) * (s1_len + ft_strlen(s2) + 1));
	if (!joiner)
		return (NULL);
	while (s1[i])
	{
		joiner[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		joiner[s1_len + i] = s2[i];
		i++;
	}
	joiner[s1_len + i] = '\0';
	return (joiner);
}
