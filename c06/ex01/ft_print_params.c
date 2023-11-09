/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:29:34 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/09 12:13:30 by amalgonn         ###   ########.fr       */
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

	i = 1;
	while (i < ac)
		ft_putstr(av[i++]);
}
