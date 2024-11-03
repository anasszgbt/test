/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 03:39:38 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/02 04:41:47 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
// 	t_list *head;
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	char value1 = '1';
// 	char value2 = '2';
// 	char value3 = '3';
// 	node1->content = &value1;
// 	node1->next = node2;
// 	node2->content = &value2;
// 	node2->next = node3;
// 	node3->content = &value3;
// 	node3->next = NULL;

// 	head = node1;

// 	t_list *last = ft_lstlast(head);

// 	char result = *(char *)(last->content);
// 	printf("%c", result);
// }