/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:50:00 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/03 01:20:10 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int main(void)
// {
// 	char str[8];
// 	size_t	n = 10;
// 	size_t	i = 0;
// 	ft_bzero(str, n);
// 	while (i < n)
// 	{
// 		printf("%d", str[i]);
// 		i++; 
// 	}
// }	