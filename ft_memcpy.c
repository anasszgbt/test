/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:02:28 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/01 04:58:00 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sourc;
	size_t			i;

	i = 0;
	dest = (unsigned char *)dst;
	sourc = (unsigned char *)src;
	if (!dest && !sourc)
		return (NULL);
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
// 	char src[] = "yarbi salama";
// 	char dst[20];
// 	printf("%s\n", ft_memcpy(dst, src, 13));
// 	printf("%s", memcpy(dst, src, 13));
// }