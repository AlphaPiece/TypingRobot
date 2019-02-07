/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 18:31:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/06 18:47:37 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

void			interface(void)
{
	char	mode;

	ft_printf("Please choose mode: \n" \
				"0. String Mode\n" \
				"1. Algrithm Mode\n");
	ft_printf("\nMode (0/1):\n");
	mode = ft_getonechar();
	while (mode != '0' && mode != '1')
	{
		ft_printf("Mode (0/1):\n");
		mode = ft_getonechar();
	}
	if (mode == '0')
		string_mode();
//	else if (mode == '1')
//		algorithm_mode();
}
	
	
