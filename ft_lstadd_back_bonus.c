/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 05:31:38 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/01 23:56:42 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	head = *lst;
	while (head->next != NULL)
		head = head->next;
	head->next = new;
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*newnode = malloc(sizeof(t_list));
// 	t_list	*node1 = malloc(sizeof(t_list));
// 	t_list	*node2 = malloc(sizeof(t_list));
// 	t_list	*node3 = malloc(sizeof(t_list));
// 	if (!newnode || !node1 || !node2 || !node3)
// 		return (-1);

// 	int	value1 = 1;
// 	int	value2 = 2;
// 	int	value3 = 3;
// 	int	newvalue = 4;

// 	newnode->content = &newvalue;
// 	newnode->next = NULL;
// 	node1->content = &value1;
// 	node1->next = node2;
// 	node2->content = &value2;
// 	node2->next = node3;
// 	node3->content = &value3;
// 	node3->next = NULL;

// 	head = node1;
// 	ft_lstadd_back(&head, newnode);

// 	while (head)
// 	{
// 		printf("%d -> ", *(int *)head->content);
// 		head = head->next;
// 	}

// 	free(newnode);
// 	free(node1);
// 	free(node2);
// 	free(node3);
// }
