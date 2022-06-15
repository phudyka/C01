/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:56:22 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/09 18:16:02 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main(void)
{
	char	*str;
	int len;

	str = "Bonsoir a tous sauf a toi";
	printf("%s\n", str);
	len = ft_strlen(str);
	printf("Cette phrase est de %d caracteres\n", len);
	return 0;
}*/
