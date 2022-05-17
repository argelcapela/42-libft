/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:04:06 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:04:06 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

int	ft_strtrim_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	trim;

	i = 0;
	j = 0;
	trim = 0;
	while (s1[i])
	{
		j = 0;
		trim = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				trim++;
			j++;
		}
		if (trim == 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_strtrim_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	trim;

	i = ft_strlen(s1) - 1;
	j = 0;
	trim = 0;
	while (i > 0)
	{
		j = 0;
		trim = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				trim++;
			j++;
		}
		if (trim == 0)
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	start = ft_strtrim_start(s1, set);
	end = ft_strtrim_end(s1, set);
	if (s1 == NULL)
		return (0);
	if (set == NULL || ft_strlen(set) == 0)
		return (ft_strdup(s1));
	if (end < start)
	{
		return (ft_strdup(""));
	}
	str = ft_substr(s1, start, (end - start) + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}
