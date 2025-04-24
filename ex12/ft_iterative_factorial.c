/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:16:40 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/24 18:14:16 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nb2;

	nb2 = nb - 1;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb2 > 0)
	{
		nb = nb * nb2;
		nb2--;
	}
	return (nb);
}
/*
#include <stdio.h>

int 	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(7));
	printf("%d\n", ft_iterative_factorial(9));
	printf("%d\n", ft_iterative_factorial(0));
	return 0;
}*/
