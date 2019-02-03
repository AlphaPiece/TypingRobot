/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   report.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 15:08:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/03 15:57:05 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

#include <stdio.h>

void	report(char *output, char *input, int len, double second)
{
	int		i;
	int		typo;

	i = -1;
	typo = 0;
	while (++i < len)
		if (output[i] != input[i])
		{
			ft_printf(RED "%c", output[i]);
			typo++;
		}
		else
			ft_printf(" ");
	ft_printf(RESET "\n");
	ft_putncharln('-', LIMIT);
	ft_printf("Accuracy: %s\n" RESET, (typo > 0) ? RED "FAIL" : GREEN "GOOD");
	printf("second: %f\n", second);
	printf("Speed: %f\n", ((double)len) / second);
}	
