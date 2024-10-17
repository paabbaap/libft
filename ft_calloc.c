/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:18:42 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/17 17:03:44 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// int	main(void)
// {
// 	size_t	nmemb = 17;
// 	size_t	size = 4;
// 	void	*ptr = ft_calloc(nmemb, size);
// 	printf("%p\n", ptr);
// 	free(ptr);
// 	return (0);
// }
