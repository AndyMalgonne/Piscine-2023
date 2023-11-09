/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:03:35 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/03 16:30:25 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	up;

	i = 0;
	up = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z' )
			str[i] += 32;
		if (up == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			up = 0;
		}
		if (!(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= 'a' && str[i] <= 'z'))
			up = 1;
		if (up == 1 && str[i] >= '0' && str[i] <= '9')
			up = 0;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int		main(int ac, char *av[])
// {
// 	printf("%s\n", ft_strcapitalize(av[1]));
// }