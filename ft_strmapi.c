/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:27:24 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/03 07:11:01 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	to_upper(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && (c >= 'a' && c <= 'z'))
// 		return (c - 32);
// 	return (c);
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	if (len == 0)
	{
		result[0] = '\0';
		return (result);
	}
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int main(void)
// {
// 	char s[] = "anass";
// 	char *result = ft_strmapi(s, to_upper);
// 	printf("%s", result);
// }