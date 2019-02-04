/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typing_robot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 12:26:09 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/03 19:23:39 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

int	*g_len_arr;
int	g_i = -1;

int	main(void)
{
	if (!(g_len_arr = ft_randintarr(10, 80, LIMIT)))
		return (1);
	interface();
	return (0);
}
