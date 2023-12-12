/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:50:10 by ancavalc          #+#    #+#             */
/*   Updated: 2023/12/12 14:15:26 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int swap;

	tmp = lst;
	while (tmp)
	{
		if (tmp->next && cmp(tmp->data, tmp->next->data) == 0)
		{
			swap = tmp->data;
			tmp->data = tmp->next->data;
			tmp->next->data = swap;
			tmp = lst;
		}
		else
			tmp = tmp->next;
	}
	return (lst);
}
