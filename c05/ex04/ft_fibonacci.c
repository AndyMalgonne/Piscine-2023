/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:26:23 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/11 11:58:58 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("-1:%d\n", ft_fibonacci(-5));
// 	printf("0:%d\n", ft_fibonacci(0));
// 	printf("1:%d\n", ft_fibonacci(1));
// 	printf("1:%d\n", ft_fibonacci(2));
// 	printf("2:%d\n", ft_fibonacci(3));
// 	printf("55:%d\n", ft_fibonacci(10));
// }