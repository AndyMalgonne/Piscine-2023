/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 08:31:53 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/11 11:56:39 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	pow;

	n = 0;
	pow = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	while (n < power)
	{
		pow = pow * nb;
		n++;
	}
	return (pow);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("0:%d\n", ft_iterative_power(1, -10));
// 	printf("0:%d\n", ft_iterative_power(1, -1));
// 	printf("1:%d\n", ft_iterative_power(10, 0));
// 	printf("10:%d\n", ft_iterative_power(10, 1));
// 	printf("100:%d\n", ft_iterative_power(10, 2));
// 	printf("216:%d\n", ft_iterative_power(6, 3));
// }