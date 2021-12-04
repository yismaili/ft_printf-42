/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:59:52 by yismaili          #+#    #+#             */
/*   Updated: 2021/12/04 21:00:36 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <limits.h>
#include "ft_printf.h"

int print()
{
	int a = ft_printf(" %x ", 0);
	printf("(%d)\n", a );
	a = printf(" %x ", 0);
	printf("(%d)\n", a);
	return a;
}
int main(void)
{

	print();
}
