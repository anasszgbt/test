/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:52:49 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/02 03:57:43 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	size_t			totalsize;
	unsigned char	*ptr;

	i = 0;
	totalsize = count * size;
	ptr = malloc(totalsize);
	if (ptr == NULL)
		return (NULL);
	while (i < totalsize)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
