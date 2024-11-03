/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:20:48 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/03 16:07:41 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str[] ="hello there hh";
// 	char tofind = 't';
// 	char *result = ft_memchr(str, tofind, 11);
// 	int index = result - str + 1;
// 	if (result != NULL)
// 	{
// 		printf("found this value %s in the index %d", result, index);
// 	}
// 	else 
// 		printf("result is not found");
// }