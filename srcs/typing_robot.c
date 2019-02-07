/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typing_robot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 00:08:22 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/07 00:19:02 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

int		*g_len_arr;
int		g_i = LIMIT + 1;

void	reset_randint(int lower, int upper)
{
	if (g_i == LIMIT)
		free(g_len_arr);
	if (!(g_len_arr = ft_randintarr(lower, upper, LIMIT)))
		exit(1);;
	g_i = -1;
}

int		main(void)
{
	interface();
	return (0);
}
