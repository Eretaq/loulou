/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:36:26 by sel-mall          #+#    #+#             */
/*   Updated: 2025/02/17 18:59:10 by sel-mall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 97  && str[i] <= 122)
			|| (str[i] >= 65  && str[i] <= 90 ))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
int	main()
{
	char	string[50] = "121224";
	int	resultat;
	resultat = ft_str_is_alpha (string);
	printf ( "%d ", resultat);
}
