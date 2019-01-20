/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 19:57:06 by kbatz             #+#    #+#             */
/*   Updated: 2019/01/19 20:49:38 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_bits(void *a, unsigned long size)
{
	char	j;

	while(size-- > 0)
	{
		j = 8;
		while (--j >= 0)
		{
			printf("%d", ((*(unsigned char *)a >> j) & 1));
		}
		a++;
		printf(" ");
	}
	printf("\n");
}

int		main(void)
{
	float f;
	long long int b;

	f = 1.0 / 8.0 + 15.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = -1.0 / 8.0 - 15.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = 1.0 / 3.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = (-1.0 / 3.0);
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = 0.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = -0.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = 1.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = -1.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = 2.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = -2.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = 4.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = -4.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = 15.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = -15.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = 128.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = -128.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = 255.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = -255.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = 99999.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	f = -9999.0;
	printf("%10.5f -> ", f);
	print_bits(&f, sizeof(f));
	printf("%f", +0.0);
	printf("%100f", -0.0);
	return (0);
}
