/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:10:12 by sel-mall          #+#    #+#             */
/*   Updated: 2025/02/17 15:20:12 by sel-mall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main()
{
	char	destination[50] = "TESTTTTTs";
	char	source[50] = "hello";
	printf("Avant copie : %s\n ", destination);
	ft_strcpy(destination, source);
	printf("Apres : %s\n " , destination);
	return (0);
}*/
