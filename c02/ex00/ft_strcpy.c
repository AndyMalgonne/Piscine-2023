/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:15:24 by amalgonn          #+#    #+#             */
/*   Updated: 2023/07/04 16:52:29 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int		main()
// {
// 	char dest[]= "nOP";
// 	char src[] = "Oui";
// 	printf("src:%s\nret:%s\ndest:%s\n", src, ft_strcpy(dest, src), dest );
// }