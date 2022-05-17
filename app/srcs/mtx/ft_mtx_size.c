/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtx_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:37:17 by acapela-          #+#    #+#             */
/*   Updated: 2022/05/16 21:42:35 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_mtx_size(void **matrix)
{
	int	size;

	size = 0;
	while(matrix[size] != NULL)
		size++;
	return (size);
}
