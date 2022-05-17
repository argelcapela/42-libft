/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   understanding_format.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 03:15:49 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 03:25:58 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

char	understanding_format(t_fs_arg *arg, const char *format, va_list *vl)
{
	char	*start_of_str;

	arg->argument = ft_calloc(ft_strlen(format) + 1, sizeof(char));
	start_of_str = arg->argument;
	*arg->argument++ = *format++;
	what_flags(arg, &format);
	what_width(arg, &format, vl);
	what_precision(arg, &format, vl);
	*arg->argument = *format;
	arg->type = *format;
	arg->argument = start_of_str;
	return (ft_strlen(arg->argument) - 1);
}
