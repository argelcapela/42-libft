/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- <acapela-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:08:46 by acapela-          #+#    #+#             */
/*   Updated: 2022/05/10 20:46:12 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

int	ft_lstsize(t_list *lst)
{
	int			i;
	t_list		*ptr;

	i = 0;
	ptr = lst;
	if (lst == NULL)
		return (0);
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
