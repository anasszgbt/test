/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 04:50:40 by azghibat          #+#    #+#             */
/*   Updated: 2024/10/25 05:03:05 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	s1len;
	char	*ptr;

	i = 0;
	s1len = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * (s1len + 1));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main(void)
// {
// 	char s1[] = "hhasf";
// 	char *ptr = ft_strdup(s1);
// 	printf("%s", ptr);
// 	free(ptr);
// }