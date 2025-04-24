/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:32:38 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/24 16:42:10 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	if (nb <= 0)
		return (0);
	while (result == 46340 | result * result < nb)
		result++;
	if (result * result == nb)
		return (result);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("racine carree de 25 : %d\n", ft_sqrt(25));
	printf("racine carree de 64 : %d\n", ft_sqrt(64));
	printf("racine carree de 49 : %d\n", ft_sqrt(49));
	printf("racine carree de 0 : %d\n", ft_sqrt(0));
	return 0;
}*/
