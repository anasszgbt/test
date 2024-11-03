/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:16:23 by azghibat          #+#    #+#             */
/*   Updated: 2024/10/22 12:51:56 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') 
		|| (c >= '0' && c <= '9'))
		return (1);
	else 
		return (0);
}

// int main(void)
// {
// 	int c = 1;
// 	char g = 'g';
// 	char b = '|';
// 	printf("%d\n", ft_isalnum(c));
// 	printf("%d\n", ft_isalnum(g));
// 	printf("%d\n", ft_isalnum(b));
// }