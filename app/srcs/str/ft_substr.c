/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:46:08 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/21 21:23:21 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	char	*temp;

	new = malloc(len + 1);
	temp = new;
	while (start > 0)
	{
		s++;
		start--;
	}
	while (len > 0 && *s)
	{
		*new++ = *s++;
		len--;
	}
	*new = '\0';
	return (temp);
}
