/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_i.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuffleb <etuffleb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 17:34:18 by etuffleb          #+#    #+#             */
/*   Updated: 2019/01/21 20:08:18 by etuffleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		f_i(va_list ap)
{
	long long int	integer;
	char		*int_num;
	int			width;

	integer = va_arg(ap, long long int);
	int_num = ft_itoa((int)integer);

	return ((int)int_num);
}

