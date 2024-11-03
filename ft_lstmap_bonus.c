/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 01:20:04 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/03 07:36:50 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst != NULL)
	{
		node = ft_calloc(1, sizeof(t_list));
		if (!node)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		node->content = f(lst->content);
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}

// void *f(void *i)
// {
// 	int *s = (int *)malloc(4);
// 	if (!s)
// 		return NULL;
// 	*s = *(int *)i + 1;
// 	return ((void *)s);
// }

// void del(void *content)
// {	
// 	free(content);
// }

// int main()
// {
// 	void *(*h)(void *) = f;

// 	int a = 5, b = 10, c = 2, d = 18;

// 	t_list *node1 = ft_lstnew(&a);
// 	t_list *node2 = ft_lstnew(&b);
// 	t_list *node3 = ft_lstnew(&c);
// 	t_list *node4 = ft_lstnew(&d);

// 	t_list *head = node1;

// 	ft_lstadd_back(&head,node2);
// 	ft_lstadd_back(&head,node3);
// 	ft_lstadd_back(&head,node4);

// 	node4->next = NULL;

// 	head = ft_lstmap(head, f, del);

// 	while (head)
// 	{	
// 		printf("%d -> ", *(int *)head->content);
// 		head = head->next;
// 	}

// }