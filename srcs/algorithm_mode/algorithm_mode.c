/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_mode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 17:30:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/07 00:25:25 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

void	algorithm_mode(void)
{
	char	**code;
	int		line_num;
	int		i;

	line_num = alg_select(&code);
	i = 0;
	while (i < line_num)
		one_round(code, i);
}
