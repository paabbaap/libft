/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:43:31 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/11 14:15:08 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dst[d] != '\0' && size > d)
		d++;
	while (src[s] != '\0')
		s++;
	if (d >= size)
		return (size + s);
	i = d;
	while (size > i + 1 && *src)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	if (size > i)
		dst[i] = '\0';
	return (d + s);
}
int	main(void)
{
	char	dest[] = "kom";
	char	src[] = "mertje";
	size_t n = 7;
	printf("ft_strlcat: %zu\n", ft_strlcat(dest, src, n));
	printf("dest: %s\n", dest);
	char	destt[] = "kom";
	char	srcc[] = "mertje";
	printf("strlcat: %zu\n", strlcat(destt, srcc, n));
	printf("destt: %s\n", destt);
}