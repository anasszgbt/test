/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 02:46:22 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/03 14:26:13 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *s1, char c)
{
	while (*s1)
	{
		if (*s1 == c)
			return (1);
		s1++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && check(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && end > 0 && check(set, s1[end - 1]))
		end--;
	len = end - start;
	trim = malloc(len + 1);
	if (!trim)
		return (NULL);
	ft_memcpy(trim, &s1[start], len);
	trim[len] = '\0';
	return (trim);
}

// int main(void)
// {
// 	char s1[] = " aahhhaaa ";
// 	char set[] = " ";
// 	printf("%s\n", ft_strtrim(s1, set));
// }