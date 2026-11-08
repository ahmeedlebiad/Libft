/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebiad <alebiad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:28:17 by username          #+#    #+#             */
/*   Updated: 2026/10/16 17:43:16 by alebiad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	i = 0;
	ps1 = (const unsigned char *) s1;
	ps2 = (const unsigned char *) s2;
	while (n > i && s1[i] && ps1[i] == ps2[i])
	{
		i++;
	}
	if (n > i)
		return (ps1[i] - ps2[i]);
	else
		return (0);
}
