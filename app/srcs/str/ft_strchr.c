/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- <acapela-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:44:17 by acapela-          #+#    #+#             */
/*   Updated: 2022/04/06 22:49:51 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if (*str == (unsigned char)ch)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)ch == '\0')
		return ((char *)str);
	return (NULL);
}

int	ft_indexof(const char *str, int ch)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == (unsigned char)ch)
			return (i - 1);
		str++;
		i++;
	}
	if ((unsigned char)ch == '\0')
		return (i - 1);
	return (0);
}
