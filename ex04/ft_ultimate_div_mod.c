/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:50:30 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/09 18:15:19 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*#include <stdio.h>
int main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 7;

	ft_ultimate_div_mod(&a, &b);
	printf("Le resultat de la division est de : %d, il reste %d", a, b);
	return (0);
}*/
