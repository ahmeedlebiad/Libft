/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebiad <alebiad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:06:06 by username          #+#    #+#             */
/*   Updated: 2026/10/16 17:34:54 by alebiad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;
	size_t				i;

	i = 0;
	ps1 = (const unsigned char *) s1;
	ps2 = (const unsigned char *) s2;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return ((int) ps1[i] - (int) ps2[i]);
		i++;
	}
	return (0);
}
