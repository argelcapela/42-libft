/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtx_replace_all.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:47:50 by acapela-          #+#    #+#             */
/*   Updated: 2022/05/16 21:37:00 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

char	**ft_mtx_replace_all(char **matrix, char *search, char *replace)
{
	char	**start_of_matrix;
	char	*tmp;

	start_of_matrix = matrix;
	while (*(matrix))
	{
		if (ft_strnstr(*(matrix), search, sizeof(*(matrix))) != NULL)
		{
			tmp = ft_strdup(*(matrix));
			ft_free_ptr((void *) &(*(matrix)));
			*(matrix) = ft_str_replace_all(tmp, search, replace);
		}
		matrix++;
	}
	return (start_of_matrix);
}
