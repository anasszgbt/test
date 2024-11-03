/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:56:18 by azghibat          #+#    #+#             */
/*   Updated: 2024/10/23 20:58:59 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = (char)c;
	while (*s)
	{
		if (*s == d)
			return ((char *)s);
		s++;
	}
	if (d == '\0')
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
// 	char *s = "anass";
// 	int c = 's';
// 	char *result = ft_strchr(s, c);
// 	char *result2 = strchr(s, c);
// 	if (result != NULL || result2 != NULL) 
// 	{
// 		int i = result - s + 1;
// 		printf("found %s in position %d\n", result, i);
// 		printf("found %s in position %d", result2, i);
// 	}
// }