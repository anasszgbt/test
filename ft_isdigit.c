/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:06:20 by azghibat          #+#    #+#             */
/*   Updated: 2024/10/22 12:25:08 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else 
		return (0);
}

// int main(void)
// {
// 	char r = 'r';
// 	int c = 9;
// 	printf("%d\n", ft_isdigit(r));
// 	printf("%d", ft_isdigit(c));
// }