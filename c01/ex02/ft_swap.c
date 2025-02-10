/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:02:58 by sel-mall          #+#    #+#             */
/*   Updated: 2025/02/10 17:50:14 by sel-mall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	permut;

	permut = *a ;
	*a = *b ;
	*b = permut ;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 5;
	printf("avant l inversion donne pour a : %d et b : %d ", a, b);
	ft_swap(&a, &b);
	printf("Apres inversion donne pour a : %d et b : %d  ",  a, b);
	return (0);
}*/
