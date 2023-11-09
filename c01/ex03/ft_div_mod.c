/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 09:48:30 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/01 11:29:54 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int a;
	int b;
	int div;
	int mod;
	

	a = 16;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	if(div == 3 && mod == 1)
	{
		write (1, "ok\n", 3);
	}
	else 
	{
		write (1, "fail\n", 5);
	}
}*/