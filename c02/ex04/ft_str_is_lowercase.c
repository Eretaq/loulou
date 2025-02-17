/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:28:23 by sel-mall          #+#    #+#             */
/*   Updated: 2025/02/17 18:11:38 by sel-mall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] <  97  ||  str[i] > 122 )
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int	main()
{
	char	string[50] = "HGSHGSSGH";
	int	resultat;
	resultat = ft_str_is_lowercase(string);
	printf("%d\n", resultat);
	return (0);
}
