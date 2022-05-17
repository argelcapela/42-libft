/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_minus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 01:58:10 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 20:57:36 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

char	*remove_minus(char *string, t_fs_arg *arg)
{
	char	*tmp;

	if (*string == '-')
	{
		tmp = ft_substr(string, 1, ft_strlen(string));
		arg->negative = 1;
		ft_free_ptr((void **) &string);
		return (tmp);
	}
	return (string);
}
