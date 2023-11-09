/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:09:21 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/11 11:59:47 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i < nb)
	{	
		if (i * i <= 0)
			return (0);
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}

//#include <stdio.h>
// int	main(void)
// {
// 	printf("10:%d\n", ft_sqrt(100));
// 	printf("6:%d\n", ft_sqrt(36));
// 	printf("0:%d\n", ft_sqrt(37));
// 	printf("100:%d\n", ft_sqrt(10000));
// 	printf("0:%d\n", ft_sqrt(10001));
// 	printf("2000:%d\n", ft_sqrt(2147483646));
// 	printf("0:%d\n", ft_sqrt(-36));
// }