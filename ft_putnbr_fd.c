/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 00:47:51 by azghibat          #+#    #+#             */
/*   Updated: 2024/10/30 02:05:29 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	char			c;

	if (n < 0)
	{
		write(fd, "-", 1);
		num = (unsigned int)(-n);
	}
	else 
		num = (unsigned int)n;
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	c = (num % 10) + '0';
	write(fd, &c, 1);
}

// int main(void)
// {
// 	int num = -2147483648;
// 	int n = 74636478;
// 	ft_putnbr_fd(num, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(n, 2);
// }