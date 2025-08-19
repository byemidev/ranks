/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 09:05:24 by garevalo          #+#    #+#             */
/*   Updated: 2025/08/19 09:25:03 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <list.h>
#include <unistd.h>

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	tmp;
	t_list *head;

	head = tmp;
	while (lst != NULL && lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);
}
