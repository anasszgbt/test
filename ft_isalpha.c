/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:33:41 by azghibat          #+#    #+#             */
/*   Updated: 2024/10/22 11:05:47 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else 
		return (0);
}

// int	main(void)
// {
// 	char c = 'a';
// 	char d = '3';
// 	int result = ft_isalpha(c);
// 	int result2 = ft_isalpha(d);
// 	printf("%d\n", result);
// 	printf("%d\n", result2);
// }