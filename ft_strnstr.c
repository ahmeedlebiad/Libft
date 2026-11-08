/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebiad <alebiad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 23:08:47 by username          #+#    #+#             */
/*   Updated: 2026/10/16 17:46:23 by alebiad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (little[i])
		i++;
	i = 0;
	while ((i + j < len) && little[j] && big[i])
	{
		j = 0;
		while ((i + j < len) && (big[i + j] == little[j]) && little[j])
			j++;
		i++;
	}
	if (little[j] == '\0')
		return ((char *)(big + i - 1));
	return (NULL);
}
