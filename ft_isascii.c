/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:38:53 by azghibat          #+#    #+#             */
/*   Updated: 2024/10/22 11:49:07 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main(void)
// {
// 	int c = 0;
// 	char d = '\n';
// 	printf("%d", ft_isascii(c));
// 	printf("%d", ft_isascii(d));
// }