/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 00:31:13 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/09 18:15:01 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
     int a = 40;
     int b = 7;
     int div;
     int mod;

     ft_div_mod(a, b, &div, &mod);
     printf("%d %d\n", div, mod);
     return (0);
}*/
