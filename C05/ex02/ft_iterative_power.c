/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:36:58 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/18 18:57:54 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		n = n * nb;
		i++;
	}
	return (n);
}

/*
#include <stdio.h>
int main()
{
	int result;
	
	result = ft_iterative_power(5, 3);
	printf("result: %d", result);
	return (0);
}
*/