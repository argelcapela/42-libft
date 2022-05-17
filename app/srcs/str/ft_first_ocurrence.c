/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_ocurrence.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- <acapela-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:49:55 by acapela-          #+#    #+#             */
/*   Updated: 2022/04/08 16:54:19 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

int	ft_first_ocurrence(const char *str, int ch)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == (unsigned char)ch)
			return (i);
		str++;
		i++;
	}
	if ((unsigned char)ch == '\0')
		return (i - 1);
	return (0);
}
