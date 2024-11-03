/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 01:45:10 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/02 04:32:28 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

//  int main(void)
//  {
// 	t_list *head;
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));
// 	t_list *new = malloc(sizeof(t_list));

// 	int value1 = 2;
// 	int value2 = 3;
// 	int value3 = 4;
// 	int newvalue = 10;
// 	node1->content = &value1;
// 	node1->next = node2;
// 	node2->content = &value2;
// 	node2->next = node3;
// 	node3->content = &value3;
// 	node3->next = NULL;
// 	new->content = &newvalue;
// 	new->next = NULL;
// 	ft_lstadd_front(&node1, new);
// 	head = node1;
// 	while (head != NULL)
// 	{
// 		printf("%d->", *(int *)head->content);
// 		head = head->next;
// 	}
//  }