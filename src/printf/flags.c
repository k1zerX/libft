/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 17:02:41 by kbatz             #+#    #+#             */
/*   Updated: 2019/01/21 19:56:34 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

	// "#0-+ '"
	// "76543210"

int		mini_atoi(va_list ap, const char *restrict *format, int *len)
{
	int		res;

	res = 0;
	if (**format == '*')
		res = va_arg(ap, int);
	else
		while (ft_isnumber(**format) && (*len)--)
			res = res * 10 + *(*format)++ - 48;
	return (res);
}

t_format	format(va_list ap, const char *restrict format, int len)
{
	t_format	f;

	f.flags = 0;
	while (len-- > 0)
	{
		if (*format == '.')
			f.precision = mini_atoi(ap, &(++format), &(--len));
		if (*format == '0')
			f.flags |= 1 << 6;
		f_width = mini_atoi(ap, &fromat, &len);
		if (*format == '-')
			f.flags |= 1 << 5;
		else if (*format == '+')
			f.flags |= 1 << 4;
		else if (*format == ' ')
			f.flags |= 1 << 3;
		else if (*format == '\'')
			f.flags |= 1 << 2;
		format++;
	}
	if (f.flags & 32)
		f.flags &= ~(1 << 6);
	if (f.flags & 16)
		f.flags &= ~(1 << 3);
	return (f);
}

int			ft_print(t_format f, char *str)
{
	d
}
