/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:29:38 by sel-mall          #+#    #+#             */
/*   Updated: 2025/02/10 17:47:49 by sel-mall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b ;
	mod = *a % *b ;
	*a = div;
	*b = mod;
}

/*
int	main()
{
	int	a = 40;
	int	b = 6;
	ft_ultimate_div_mod(&a, &b);
	printf("la division donne :  %d\n " , a);
	printf("le reste de la  division donne : %d\n", b);
	return (0);
}*/
