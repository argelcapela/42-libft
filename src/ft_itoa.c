/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:41:09 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:41:09 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_itoa_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len = len + 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ft_itoa_str(long n, char *str, int *i)
{
	if (n > 9)
	{
		ft_itoa_str(n / 10, str, i);
		ft_itoa_str(n % 10, str, i);
	}
	else
		str[(*i)++] = '0' + n;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = ft_calloc(ft_itoa_len(n) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n == -2147483648)
	{
		str[i++] = '-';
		str[i++] = '2';
		n = 147483648;
	}
	else if (n < 0)
	{
		str[i++] = '-';
		n *= -1;
	}
	ft_itoa_str(n, str, &i);
	str[i] = '\0';
	return (str);
}
