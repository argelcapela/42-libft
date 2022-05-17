/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:45:18 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:45:18 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	*newstr;
	size_t			i;

	i = 0;
	if (!s || !f)
		return (0);
	newstr = (unsigned char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (newstr == 0)
		return (0);
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	return ((char *)newstr);
}
