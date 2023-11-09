/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 10:08:46 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/01 11:32:09 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *a;
}

/*int main()
{
	int a;
	int b;

	a = 16;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	if(a == 3 && b == 1)
	{
		write (1, "ok", 3);
	}
	else 
	{
		write (1, "no", 3);
	}
}*/