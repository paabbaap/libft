/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:18:09 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/17 15:30:02 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	ptr = malloc(len * sizeof(char) + 1);
	if (ptr == 	NULL)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
	 
}


// int	main(void)
// {
// 	char	s[14] = "mnogotizdrave";
// 	char	*ptr = ft_strdup(s);
// 	printf("%s\n", ptr);
// 	free(ptr);
// 	return (0);
// }
