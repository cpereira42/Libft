/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 22:55:47 by cpereira          #+#    #+#             */
/*   Updated: 2020/01/28 18:22:38 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*frase;

	frase = (void *)s;
	i = ft_strlen(frase);
	while (i >= 0)
	{
		if (frase[i] == (char)c)
			return (&frase[i]);
		if (i == 0)
			return (0);
		i--;
	}
	return (0);
}
