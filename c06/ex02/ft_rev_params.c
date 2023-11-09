/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:11:32 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/09 12:14:17 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str++, 1);
	}
	write(1, "\n", 1);
}

int	main(int ac, char *av[])
{
	int	i;

	i = ac - 1;
	while (i > 0)
		ft_putstr(av[i--]);
}
