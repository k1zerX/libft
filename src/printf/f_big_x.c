/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_big_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuffleb <etuffleb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 22:30:28 by etuffleb          #+#    #+#             */
/*   Updated: 2019/01/21 20:11:52 by etuffleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		f_big_x(va_list ap)
{
	long long int	integer;
	char			*int_num;
	int				width;

	integer = va_arg(ap, int);
	int_num = ft_itoa_base((int)integer, 16);
	return ((int)int_num);
}

