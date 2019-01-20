/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_i.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuffleb <etuffleb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 17:34:18 by etuffleb          #+#    #+#             */
/*   Updated: 2019/01/21 00:17:27 by etuffleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		f_i(va_list ap, const char *restrict str, int len)
{
	long long int	integer;
	char		*int_num;
	int			width;

	integer = va_arg(ap, int);
	int_num = ft_itoa_base((int)integer, 10);
	width = strlen(int_num);
	write(1, int_num, width);
	return (len);
}

