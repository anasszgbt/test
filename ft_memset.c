/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:39:48 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/03 05:03:39 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*string;
	size_t			i;

	string = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		string[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main(void)
// {
// 	// size_t len = 10;
// 	// char c = 'b';
// 	// char b[20];
// 	// printf("my test : %s\n", ft_memset(b, c, len));
// 	// printf("fucking test : %s\n", memset(b, c, len));

// 	// int c = 9;
// 	// ft_memset(&c, 1, 2);
// 	// printf("%d", c);
// }