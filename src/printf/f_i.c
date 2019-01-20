/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_i.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuffleb <etuffleb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 17:34:18 by etuffleb          #+#    #+#             */
/*   Updated: 2019/01/20 18:07:35 by etuffleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		f_i(va_list ap, const char * restrict str, int len)
{
	long int	integer;
	char		*int_num;
	int			width;

	integer = va_arg(ap, int);
	int_num = ft_itoa(integer);
	width = ft_strlen(int_num);
	if (str[0] == (-+ 0#))
		str++;
	if (precision = ft_atoi(ft_strchr(str, '.') + 1);
	
	write(1, &int_num, width);
	return (len);
}

