/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:01:27 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/02 07:07:07 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	d;
	char	*lastocc;

	d = (char)c;
	lastocc = NULL;
	while (*s)
	{
		if (*s == d)
			lastocc = (char *)s;
		s++;
	}
	if (d == '\0')
		return ((char *)s);
	return (lastocc);
}

// int main(void)
// {
// 	char *s = "anass";
// 	char c = 's';
// 	char *result = ft_strrchr(s, c);
// 	char *result2 = strrchr(s, c);
// 	if (result != NULL)
// 	{
// 		int index = result - s + 1;
// 		printf("found %s in the position %d\n", result, index);
// 		printf("found %s in the position %d", result2, index);
// 	}
// }