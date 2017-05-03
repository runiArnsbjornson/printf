/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stris.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebladi <jdebladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 12:35:08 by jdebladi          #+#    #+#             */
/*   Updated: 2016/11/23 15:21:24 by jdebladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_stris(const char *s, int (*f)(char))
{
	size_t i;

	if (s == NULL || f == NULL)
		return (0);
	i = 0;
	while (s[i])
	{
		if (f(((char *)s)[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
