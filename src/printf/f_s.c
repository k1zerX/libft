/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_s.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuffleb <etuffleb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 19:30:25 by etuffleb          #+#    #+#             */
/*   Updated: 2019/01/19 20:20:58 by etuffleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		f_s(va_list ap, const char *restrict str, int len)
{
	char *string;
	int length;

	string = va_arg(ap, char *);
	length = ft_strlen(string);
	write(1, string, length);
	return (len);
}
