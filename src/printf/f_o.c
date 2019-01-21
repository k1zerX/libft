/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_o.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuffleb <etuffleb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 22:30:06 by etuffleb          #+#    #+#             */
/*   Updated: 2019/01/21 20:08:24 by etuffleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		f_o(va_list ap)
{
	unsigned int	integer;
	char			*int_num;
	int				width;

	integer = va_arg(ap, unsigned int);
	int_num = ft_itoa_base(integer, 8);

	return ((int)int_num);
}
