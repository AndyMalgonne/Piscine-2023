/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:38:04 by amalgonn          #+#    #+#             */
/*   Updated: 2023/06/29 16:58:13 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcharthree(int a, int b, int c)
{
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	ft_putchar('0' + c);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putcharthree(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					write (1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb();
	return(0);
}