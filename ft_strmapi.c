/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebiad <alebiad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:42:29 by username          #+#    #+#             */
/*   Updated: 2026/10/25 23:49:50 by alebiad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			s_len;
	char			*out_put;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	out_put = malloc(sizeof(char) * (s_len + 1));
	if (!out_put)
		return (NULL);
	while (s[i])
	{
		out_put[i] = f(i, s[i]);
		i++;
	}
	out_put[i] = '\0';
	return (out_put);
}
