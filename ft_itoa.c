/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:40:20 by azghibat          #+#    #+#             */
/*   Updated: 2024/10/29 22:20:52 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_count(int n)
{
	int	counter;

	counter = 0;
	if (n <= 0)
		counter += 1;
	while (n)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*result;
	unsigned int	num;

	len = len_count(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		num = (unsigned int)(-n);
	}
	else 
		num = n;
	if (n == 0)
		result[0] = '0';
	while (num > 0)
	{
		len--;
		result[len] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}

// int main(void)
// {
// 	int num = 0;
// 	printf("%s the len %d", ft_itoa(num), len_count(num));
// }