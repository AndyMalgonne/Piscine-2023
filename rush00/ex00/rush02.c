/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhphan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:50:59 by anhphan           #+#    #+#             */
/*   Updated: 2023/07/01 15:37:40 by anhphan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printline(int x, char left, char middle, char right)
{
	int	j;

	j = 1;
	ft_putchar(left);
	while (j < x - 1)
	{
		ft_putchar(middle);
		j++;
	}
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x < 1 || y < 1)
		return ;
	while (i <= y)
	{
		if (i == 1)
			printline(x, 'A', 'B', 'A');
		else if (i == y)
			printline(x, 'C', 'B', 'C');
		else
			printline(x, 'B', ' ', 'B');
		i++;
	}
}
