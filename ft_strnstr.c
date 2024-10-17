/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:04:53 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/17 17:55:22 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big || !little)
		return (NULL);
	if (little[j] == '\0')
		return ((char *)big);
	while ((big[i++] != '\0' && len-- > 0) || little[j] == '\0')
	{
		if (big[i] == little[j] || little[j] == '\0')
		{
			if (little[j] == '\0')
				return ((char *)&big[i - j]);
			j++;
		}
		else
		{
			i -= j;
			len += j;
			j = 0;
		}
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	big[] = "12345567890";
// 	const char	little[] = "567";
// 	size_t	len = 9;
// 	printf("%s\n", ft_strnstr(big, little, len));
// 	printf("%s\n", strnstr(big, little, len));
// 	return (0);
// }
