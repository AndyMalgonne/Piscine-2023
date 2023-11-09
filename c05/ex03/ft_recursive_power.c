/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 08:53:36 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/11 12:12:21 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("0:%d\n", ft_recursive_power(1, -10));
// 	printf("0:%d\n", ft_recursive_power(1, -1));
// 	printf("1:%d\n", ft_recursive_power(10, 0));
// 	printf("10:%d\n", ft_recursive_power(10, 1));
// 	printf("100:%d\n", ft_recursive_power(10, 2));
// 	printf("216:%d\n", ft_recursive_power(6, 3));
// }