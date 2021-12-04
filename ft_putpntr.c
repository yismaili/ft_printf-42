/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpntr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:20:58 by yismaili          #+#    #+#             */
/*   Updated: 2021/12/02 19:36:57 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static int	ft_len(unsigned	long long num)
{
	int	len;

    len = 0;
	if (num == 0)
		return 1;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}
int ft_putpntr(unsigned long long ptr)
{
	char *hex;

	hex = "0123456789abcdef";
	if (ptr == '0')
	{
		ft_putchar('0');
	}
	if (ptr < 16)
	{
		ft_putchar(hex[ptr]);
	}
	else
	{
		ft_putpntr(ptr / 16);
		ft_putpntr(ptr % 16);
	}
	return (ft_len(ptr));
}
/*#include<stdio.h>
int main(void)
{
	int num;
	num = 1524;
	ft_printf("%p\n", &num);
	printf("%p\n", &num);
}
*/