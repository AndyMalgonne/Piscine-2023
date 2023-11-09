/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 08:52:22 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/11 11:55:20 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	n;

	n = 1;
	fact = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (n <= nb)
	{
		fact = fact * n;
		n++;
	}
	return (fact);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("0:%d\n", ft_iterative_factorial(-10));
// 	printf("0:%d\n", ft_iterative_factorial(-1));
// 	printf("1:%d\n", ft_iterative_factorial(0));
// 	printf("1:%d\n", ft_iterative_factorial(1));
// 	printf("3628800:%d\n", ft_iterative_factorial(10));
// 	printf("6:%d\n", ft_iterative_factorial(3));
// }