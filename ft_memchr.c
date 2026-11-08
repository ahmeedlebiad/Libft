/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 14:31:24 by username         #+#    #+#              */
/*   Updated: 2026/10/28 01:18:39 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ps;

	i = 0;
	ps = (const unsigned char *) s;
	while (i < n)
	{
		if (ps[i] == (unsigned char) c)
			return ((void *)(&ps[i]));
		i++;
	}
	return (NULL);
}
