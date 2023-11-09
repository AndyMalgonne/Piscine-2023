/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:28:59 by amalgonn          #+#    #+#             */
/*   Updated: 2023/06/29 17:56:31 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

int main()
{
	ft_print_alphabet();
	return(0);
}