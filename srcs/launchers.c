/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launchers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobion <arobion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 11:34:25 by arobion           #+#    #+#             */
/*   Updated: 2018/02/01 13:44:23 by arobion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	ft_launch_pushback(t_room *crawler, t_room *room)
{
	ft_lstpushback(&(crawler->pipes), room, 0);
}

int		ft_launch_cmp(t_room *crawler, const char *current_room)
{
	return (ft_strcmp(crawler->name, current_room));
}

void	print_and_norme(char *line, int *b)
{
	print_line(line);
	*b = 0;
}

void	ft_launch_dump(t_list *list)
{
	ft_lstndump(&list);
}

void	print_line(char *line)
{
	if (line != NULL)
	{
		if (ft_strcmp(line, "") == 0)
			return ;
		ft_printf("%s\n", line);
	}
}
