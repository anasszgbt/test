/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:14:57 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/03 05:03:31 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (s > d)
	{
		i = 0;
		while (i < len)
			d[i++] = *s++;
	}
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}

// int main(void)
// {
// 	char str[20] = "Anass";
// 	char *result = ft_memmove(str + 3, str, 5);
// 	char *result2 = memmove(str + 3, str, 5);
// 	printf("my test = %s\n", result);
// 	// printf("te test = %s",result2);
// // 	// dst[0] = 'e' \\ tmp = "H"
// // 	// dst[1] = 'l' \\ tmp = "H"
// // 	// dst[2] = 'l' \\ tmp = "e"
// // 	// dst[3] = 'o' \\ tmp = "l" because len is 4
// // 	// dst[4] = ' ' \\ tmp = " "
// }