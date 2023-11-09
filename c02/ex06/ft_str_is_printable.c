/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:10:20 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/02 17:13:13 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			str++;
		else
			return (0);
	}
	return (1);
}

// int		main(int ac, char *av[])
// {
// 	printf("%d\n", ft_str_is_printable(av[1]));
// }