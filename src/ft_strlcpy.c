/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:08:07 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/11 14:15:18 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	dst[i] = '\0';
	while (src[len] != '\0')
		len++;
	while (src[i] != '\0' && size > 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
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
