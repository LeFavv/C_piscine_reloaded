/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:26:13 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/24 16:22:53 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb >= 14)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int     main(void)
{
        printf("%d\n", ft_recursive_factorial(5));
        printf("%d\n", ft_recursive_factorial(7));
        printf("%d\n", ft_recursive_factorial(9));
        printf("%d\n", ft_recursive_factorial(0));
        return 0;
}*/
