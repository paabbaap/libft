/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 19:45:34 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/17 18:08:27 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		s++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
//	const	char *s = "Hello World!";
// 	int	c = 'X';
// 	printf("%s\n", ft_strchr(s, c));	
// 	printf("%p\n", &s[0]);
// 	printf("%p\n", &s[1]);
// 	printf("%p\n", &s[2]);
// 	printf("%p\n", &s[3]);
// 	printf("%p\n", &s[4]);
// 	printf("%p\n", &s[5]);
// 	printf("%p\n", &s[6]);
// 	printf("%p\n", &s[7]);
// 	printf("%p\n", &s[8]);
// 	printf("%p\n", &s[9]);
// 	printf("%p\n", &s[10]);	
// 	printf("%p\n", &s[11]);
// 	printf("%p\n", &s[12]);
// 	printf("%p\n", &s[13]);	
// 	return (0);
// }
