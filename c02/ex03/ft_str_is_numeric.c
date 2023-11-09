/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:19:33 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/03 08:09:27 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ((*str >= '0' && *str <= '9'))
			str++;
		else
			return (0);
	}
	return (1);
}

// int		main(int ac, char *av[])
// {
// 	printf("%d\n", ft_str_is_numeric(av[1]));
// }