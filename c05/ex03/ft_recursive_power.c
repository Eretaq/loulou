/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:25:36 by sel-mall          #+#    #+#             */
/*   Updated: 2025/02/26 16:25:38 by sel-mall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
