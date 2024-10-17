/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:53:10 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/17 17:00:59 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*q1;
	const unsigned char	*q2;

	q1 = (const unsigned char *)s1;
	q2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 1 && *q1 && *q2)
	{
		if (*q1 != *q2)
			return (*q1 - *q2);
		n--;
		q1++;
		q2++;
	}
	if (n == 0)
		return (0);
	return (*q1 - *q2);
}

// int	main(void)
// {
// 	const char	s1[] = "gutentag";
// 	const char	s2[] = "gutenTAG";
// 	size_t	n = 15;
// 	printf("%d\n", ft_memcmp(s1, s2, n));
// 	const char	s11[] = "gutentag";
// 	const char	s22[] = "gutenTAG";
// 	size_t	nn = 15;
// 	printf("%d\n", memcmp(s11, s22, nn));
// 	return (0);
// }
