/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:41:32 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/16 19:36:32 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while ((const char *)s && n > 0)
	{
		if (*(const char *)s == c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "hooitberg";
// 	int	c = 't';
// 	size_t n = 6;
// 	printf("%s\n", (char *)ft_memchr(s, c, n));
// 	const char	ss[] = "hooitberg";
// 	int	cc = 't';
// 	size_t nn = 6;
// 	char *result = (char *)memchr(ss, cc, nn);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("character not found.\n");
// 	return (0);
// }