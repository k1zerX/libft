/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_f.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 19:33:54 by kbatz             #+#    #+#             */
/*   Updated: 2019/01/19 20:19:28 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     f_f(va_list ap, const char *restrict str, int len)
{
	float	f;
	long long int b;

	f = va_arg(ap, float);
	b = (long long int)f;
	f -= (float)b;
	printf();
	return (0);
}
