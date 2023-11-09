/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:46:49 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/11 12:11:28 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("0:%d\n", ft_recursive_factorial(-10));
// 	printf("0:%d\n", ft_recursive_factorial(-1));
// 	printf("1:%d\n", ft_recursive_factorial(0));
// 	printf("1:%d\n", ft_recursive_factorial(1));
// 	printf("3628800:%d\n", ft_recursive_factorial(10));
// 	printf("6:%d\n", ft_recursive_factorial(3));
// }