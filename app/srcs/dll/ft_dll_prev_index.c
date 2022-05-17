/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dll_prev_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:44:31 by acapela-          #+#    #+#             */
/*   Updated: 2022/05/14 00:20:08 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// get previous node index by current node index
int	ft_dll_prev_index(t_dll *a, t_dll *a_iterator)
{
	if (a_iterator->index == a->index)
		return (ft_dll_last(a)->index);
	else
	{
		return (a_iterator->previous->index);
	}
}
