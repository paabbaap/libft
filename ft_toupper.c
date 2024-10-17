/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisumi <mmisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 19:05:36 by mmisumi           #+#    #+#             */
/*   Updated: 2024/10/14 16:47:53 by mmisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	int	c;
// 	int	b;
// 	c = 3;
// 	b = 3;
// 	printf("%c\n", ft_toupper(c));
// 	printf("%c\n", toupper(b));
// 	return (0);
// }