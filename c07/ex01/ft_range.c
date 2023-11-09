/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:39:05 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/13 19:59:41 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int i;

	i = 0;
	if(min >= max)
		return (NULL);
	range = malloc((max-min)* (sizeof(int)));
	if (!range)
		return (NULL);
	while(min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int *range;
// 	range = ft_range(0, 4);
// 	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
// }