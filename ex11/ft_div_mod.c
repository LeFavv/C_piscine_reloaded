/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:09:28 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/22 14:15:43 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int        main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 10;
    b = 5;
    div = 0;
    mod = 0;
    ft_div_mod(a, b, &div, &mod);
    printf("%d\n%d\n", div, mod);
    return (0);
}*/
