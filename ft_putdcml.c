/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdcml.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:44:35 by yismaili          #+#    #+#             */
/*   Updated: 2021/12/02 22:56:55 by yismaili         ###   ########.fr       */
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
		num = num / 10;
	}
	return (len);
}
int	ft_putdcml(unsigned int num)
{
	char *dml;

	dml = "0123456789";
	if (num == '0')
	{
		ft_putchar('0');
	}
	if (num < 10)
	{
		ft_putchar(dml[num]);
	}
	else
	{
		ft_putdcml(num / 10);
		ft_putdcml(num % 10);
	}
	return (ft_len(num));
}
/*int main(void)
{
	ft_putdcml(12523032);
}
*/
