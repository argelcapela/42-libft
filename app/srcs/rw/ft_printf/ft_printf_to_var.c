/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 03:31:12 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 01:31:48 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printf_to_var(const char *format, ...)
{
	char	*fmt;
	va_list	vl;

	va_start(vl, format);
	fmt = prepare_to_translation (format, &vl);
	va_end(vl);
	return (fmt);
}
