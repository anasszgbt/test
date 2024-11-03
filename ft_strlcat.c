/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:55:21 by azghibat          #+#    #+#             */
/*   Updated: 2024/10/26 03:53:58 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	i = dstlen;
	j = 0;
	while (src[j] && (i < dstsize - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (srclen + dstlen);
}

// int main(void)
// {
// 	char c[] = "yarbi";
// 	char d[] = "salama";
// 	size_t result = ft_strlcat(d, c, sizeof(d));
// 	printf("%zu", result);
// }