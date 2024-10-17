/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:42:30 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/17 17:46:54 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;
	const size_t strlen = ft_strlen(s);

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if ((size_t)start > strlen)
		len = 0;
	if (len > strlen)
		len = strlen;
	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (i <= strlen && s[i] != '\0' && j < len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	// char const	s[] = "arebatearebate";
// 	// unsigned int	start = 7;
// 	// size_t	len = 7;
// 	// char	*substr = ft_substr(s, start, len);
// 	// printf("%s\n", substr);
// 	// free(substr);
// 	ft_substr("hola", 4294967295, 0);
// 	return (0);
// }

