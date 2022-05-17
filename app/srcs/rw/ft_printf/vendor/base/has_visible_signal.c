/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_visible_signal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 01:58:10 by acapela-          #+#    #+#             */
/*   Updated: 2022/02/01 03:29:37 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

char	*has_visible_signal(char *string, t_fs_arg *arg)
{
	char	*tmp;

	if (*string == '-')
	{
		tmp = ft_substr(string, 1, ft_strlen(string));
		arg->negative = 1;
		arg->has_visible_signal = 1;
		arg->visible_signal = '-';
		ft_free_ptr((void **) &string);
		return (tmp);
	}
	else if (arg->plus)
	{
		arg->has_visible_signal = 1;
		arg->visible_signal = '+';
	}
	return (string);
}
