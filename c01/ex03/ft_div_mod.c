/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:16:22 by sel-mall          #+#    #+#             */
/*   Updated: 2025/02/10 13:37:18 by sel-mall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main()
{
	int a = 10;
	int b= 2;
	int division;
	int modulo;
	ft_div_mod ( a , b , &division , &modulo);
	printf("le resultat de la division est : %d\n", division);
	printf("le reste est : %d\n", modulo);
	return (0);
} */
