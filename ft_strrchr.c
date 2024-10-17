/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:02:43 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/17 16:48:09 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			s = &s[i];
			return ((char *)s);
		}
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*s =  "12345";
// 	int c = '\0';
// 	printf("%s\n", ft_strrchr(s, c));
// 	return (0);
// }