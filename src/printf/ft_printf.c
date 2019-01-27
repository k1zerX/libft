/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 21:20:44 by kbatz             #+#    #+#             */
/*   Updated: 2019/01/21 21:06:11 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
void    print_bits(void *a, unsigned long size);

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
						//res += g_conv[i].f(ap, str, len);
						res += ft_print(format(ap, str, len), g_conv[i].f(ap))
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
	/*ft_printf("%f", -3.0);
	ft_printf("%f", -7.0);
	ft_printf("%f", -15.0);
	ft_printf("%f", -31.0);
	ft_printf("%f", -63.0);*/
	double j = -100.0;
	while (j <= 100.0)
	{
		if (!ft_printf("%f", j))
			printf("ALERT");
		j++;
	}
	*((long long int *)&j) = 0x7FE0000000000001;
	printf("%*d\n", 100, (int)j);
	return (0);
}
