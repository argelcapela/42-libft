/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_ocurrence.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- <acapela-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:49:55 by acapela-          #+#    #+#             */
/*   Updated: 2022/04/08 16:54:44 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

int	ft_last_ocurrence(const char *str, int ch)
{
	int	i;
	int	c1;
	int	c2;

	i = -1;
	c1 = 0;
	c2 = 0;
	while (str[++i])
	{
		if (str[i] == (unsigned char)ch)
			c1++;
		else
			continue ;
	}
	i = -1;
	while (str[++i])
	{
		if (str[i] == (unsigned char)ch)
			c2++;
		if (c2 == c1)
			return (i);
	}
	if ((unsigned char)ch == '\0')
		return (i);
	return (0);
}
