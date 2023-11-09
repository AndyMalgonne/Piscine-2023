/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:20:04 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/08 18:33:53 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		capture(char *str)
{
	int	nb;
	int i;
	int tab[15];

	i = 0;
	while (*str != '\0' && *str >= '1' && *str <= '4')
	{
		tab[i] = *str - 48;
		str++;
		if (!(*str == ' ' || *str == '\0' || (*str >= 9 && *str <= 13)))
		{	
			write(1, "Error\n", 6);
			return(1);
		}
		str++;
		i++;
		if (i == 15)
		{
			write(1, "OK", 2);
			return(0);
		}
	}
	write(1, "Error\n", 6);
	return(1);
}

