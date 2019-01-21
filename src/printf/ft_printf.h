/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuffleb <etuffleb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 21:39:27 by kbatz             #+#    #+#             */
/*   Updated: 2019/01/21 20:19:11 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <libc.h>
# include "libft.h"


typedef struct	s_conv
{
	char		conv;
	int			(*f)(va_list ap, const char * restrict str, int len);
}				t_conv;

typedef struct	s_format
{
	char		flags;
	int			width;
	int			precision;
}				t_fromat;

int		ft_printf(const char *restrict str, ...);

int		f_c(va_list ap);
int		f_s(va_list ap);
int		f_p(va_list ap);
int		f_d(va_list ap);
int		f_i(va_list ap);
int		f_o(va_list ap);/*
int		f_u(va_list ap, const char *restrict str, int len);*/
int		f_x(va_list ap, const char *restrict str, int len);
int		f_big_x(va_list ap, const char *restrict str, int len);/*
int		f_f(va_list ap, const char *restrict str, int len);
int		f_e(va_list ap, const char *restrict str, int len);
int		f_g(va_list ap, const char *restrict str, int len);
int		f_b(va_list ap, const char *restrict str, int len);
int		f_r(va_list ap, const char *restrict str, int len);
int		f_k(va_list ap, const char *restrict str, int len);*/
int		f(va_list ap, const char *restrict str, int len);


#endif
