/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthdmlup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:13:58 by yismaili          #+#    #+#             */
/*   Updated: 2021/12/02 21:42:05 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static int	ft_len(unsigned	int num)
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
int	ft_puthdmlup(unsigned int hdml)
{
	char *hex;

	hex = "0123456789ABCDEF";
	if (hdml == '0')
	{
		ft_putchar('0');
	}
	if (hdml < 16)
	{
		ft_putchar(hex[hdml]);
	}
	else
	{
		ft_puthdmlup(hdml / 16);
		ft_puthdmlup(hdml % 16);
	}
	return (ft_len(hdml));
}
/*int main(void)
{
	ft_putpntr(0X0125FDC5896);
}*/
