/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:27:55 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/11 14:14:54 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*q;
	char	*s;

	q = (char *) dest;
	s = (char *) src;
	while (n > 0)
	{
		if (dest > src)
		{
			q[n - 1] = s[n - 1];
			n--;
		}
		else
		{
			*q = *s;
			q++;
			s++;
			n--;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "gutentag";
// 	char	src[] = "boo";
// 	size_t	n = 2;
// 	ft_memmove(dest, src, n);
// 	printf("%s\n", dest);
// 	return (0);
// }