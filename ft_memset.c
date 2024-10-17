/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:53:44 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/17 15:51:27 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*q;

	q = (char *)s;
	while (n > 0)
	{
		*q = c;
		q++;
		n--;
	}
	return (s);
}

// int	main(void)
// {
// 	char	s[] = "12345";
// 	int	c;
// 	c = 'a';
// 	// ft_memset(s, c, 2);
// 	printf("%s\n", (char *)ft_memset(s, c, 0));
// 	return (0);
// }