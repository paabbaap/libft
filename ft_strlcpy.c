/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:08:07 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/17 18:01:10 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	i;
	const size_t len = ft_strlen(src);

	i = 0;
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// int	main(void)
// {
// 	char	dst[20];
// 	char	src[] = "bonsoir";
// 	printf("ft_strlcpy: %d\n", ft_strlcpy(dst, src, 0));
// 	printf("dst: %s\n", dst);
// 	char	destt[20];
// 	char	srcc[] = "bonsoir";
// 	printf("ft_strlcat: %d\n", strlcpy(destt, srcc, 0));
// 	printf("destt: %s\n", destt);
// }
