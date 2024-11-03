/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 03:03:22 by azghibat          #+#    #+#             */
/*   Updated: 2024/10/31 03:33:10 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	if (lst == NULL)
		return (0);
	return (ft_lstsize(lst->next) + 1);
}

// int main(void)
// {
// 	t_list	*head;
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	node1->content = node1;
// 	node1->next = node2;
// 	node2->content = node2;
// 	node2->next = node3; 
// 	node3->content = node3;
// 	node3->next = NULL;

// 	printf("%d", ft_lstsize(node1)); 
// }