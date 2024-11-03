/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:01:37 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/03 05:05:00 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*current;

	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

// void del(void *node)
// {
// 	free(node);
// 	node = NULL;
// }

// int main(void)
// {
// 	t_list *head;
// 	t_list *node2;
// 	char *str = ft_strdup("yarbi");
// 	char *st = ft_strdup("salama");

// 	head = ft_lstnew(str);
// 	node2 = ft_lstnew(st);

// 	(*head).next = node2;
// 	node2->next = NULL;

// 	ft_lstclear(&head, del);

// 	if (!head)
// 		printf("sir tkmi");
// 	// printf("%s -> ", (char *)head->content);
// 	// printf("%s -> ", (char *)node2->content);

// }