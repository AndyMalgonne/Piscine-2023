/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 08:43:48 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/06 10:58:12 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (&str[i]);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int		main(int ac, char *av[])
// {
// 	(void) ac;
// 	printf(".%s\n", ft_strstr(av[1],av[2]));
// 	printf(".%s\n",	strstr(av[3],av[4]));
// }