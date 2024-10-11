/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:06:24 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/11 14:14:46 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*q;
	char	*s;

	q = (char *) dest;
	s = (char *) src;
	while (n > 0)
	{
		*q = *s;
		q++;
		s++;
		n--;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "bonjour";
// 	char	src[] = "yo";
// 	size_t n;
// 	n = 2;
// 	ft_memcpy(dest, src, n);
// 	printf("%s\n", dest);
// 	return (0);
// }