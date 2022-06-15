/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 00:41:33 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/09 22:00:14 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	nbr;

	nbr = *a;
	*a = *b;
	*b = nbr;
}
/*
#include <stdio.h>
int main(void)
{
	int	c = 1;
	int d = 2;
	int *a = &c;
	int *b = &d;
	
	ft_swap(a, b);
	printf("%d ", *a);
	printf("%d\n", *b);
	return 0;
}*/
