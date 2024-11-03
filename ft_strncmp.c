/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:25:34 by azghibat          #+#    #+#             */
/*   Updated: 2024/10/23 22:17:02 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//note it chould be compared using unsigned char

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char )s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	size_t	n = 5;
// 	char *s1 = "anass";
// 	char *s2 = "an ass";
// 	int result = ft_strncmp(s1, s2, n);
// 	int result2 = strncmp(s1, s2, n);
// 	printf("%d\n", result);
// 	printf("%d", result2);
// }