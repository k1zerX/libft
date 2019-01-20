/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_i.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuffleb <etuffleb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 17:34:18 by etuffleb          #+#    #+#             */
/*   Updated: 2019/01/20 19:37:11 by etuffleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		f_i(va_list ap, const char * restrict str, int len)
{
	long int	integer;
	char		*int_num;
	int			width;
	char		*precision;
	int			w;

	integer = va_arg(ap, int);
	int_num = ft_itoa(integer);
	width = ft_strlen(int_num);
	if (str[0] == 0 || ft_strchr(str, '-+ #'))
	{

		str++;
		len--;
	}
	if ((precision = ft_strchr(str, '.')))
		precision++;
	if (len)
		w = atoi(str);
	write(1, &int_num, width);
	return ();
}

