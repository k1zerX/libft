/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 21:20:44 by kbatz             #+#    #+#             */
/*   Updated: 2019/01/20 17:57:14 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

t_conv			g_conv[] =
{
	{'c', &f_c},/*
	{'s', &f_s},
	{'p', &f_p},
	{'d', &f_i},
	{'i', &f_i},
	{'o', &f_o},
	{'u', &f_u},
	{'x', &f_x},
	{'X', &f_X},*/
	{'f', &f_f},/*
	{'%', &f},
	{'e', &f_e},
	{'g', &f_g},
	{'b', &f_b},
	{'r', &f_r},
	{'k', &f_k},*/
	{'\0', NULL}
};

int		ft_printf(const char *restrict str, ...)
{
	va_list		ap;
	int			i;
	int			len;
	int			res;

	va_start(ap, str);
	while (*str)
	{
		if (*str++ == '%')
		{
			len = -1;
			while (str[++len])
			{
				i = -1;
				while (g_conv[++i].conv)
				{
					if (g_conv[i].conv == str[len])
						res += g_conv[i].f(ap, str, len);
					//printf("%c", str[len]);
				}
				if (!g_conv[i].conv)
					break ;
			}
			str += len + 1;
		}
		else
			write(1, str - 1, 1);
	}
	va_end(ap);
	return (res);
}

int		main(void)
{
	char	c;

	c = 'Z';
	ft_printf("---\n1 = %f---\n", -3.0);
	ft_printf("---\n2 = %f---\n", -7.0);
	ft_printf("---\n3 = %f---\n", -15.0);
	ft_printf("---\n4 = %f---\n", -31.0);
	ft_printf("---\n5 = %f---\n", -63.0);
	return (0);
}
