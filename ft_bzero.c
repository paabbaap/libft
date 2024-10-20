/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:38:41 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/11 14:13:23 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char	*q;

	q = (char *)s;
	while (n > 0)
	{
		*q = '\0';
		q++;
		n--;
	}
	return (s);
}

// int	main(void)
// {
// 	char	s[] = "12345";
// 	int	n;
// 	n = 4;	
// 	printf("%d\n", ft_bzero(s, n));
// 	return (0);
// }
