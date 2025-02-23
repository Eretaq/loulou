/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:17:55 by sel-mall          #+#    #+#             */
/*   Updated: 2025/02/23 17:25:58 by sel-mall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar (str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])

{
	int	i;

	i = 0 ;
	if (argc >= 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
