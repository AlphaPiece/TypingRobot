/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   report.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 15:08:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/04 11:16:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

void	speed_level(int cps)
{
	if (cps >= 16)
		ft_printf("Speed: " CYAN "%s\n" RESET, "S");
	else if (cps >= 8)
		ft_printf("Speed: " MAGENTA "%s\n" RESET, "A");
	else if (cps >= 4)
		ft_printf("Speed: " GREEN "%s\n" RESET, "B");
	else if (cps >= 2)
		ft_printf("Speed: " YELLOW "%s\n" RESET, "C");
	else
		ft_printf("Speed: " RED "%s\n" RESET, "D");
}

void	report(char *output, char *input, int len, int sec)
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
	ft_printf("Characters: %d\n", len);
	ft_printf("Time: %ds\n", sec);
	if (sec == 0)
		speed_level(len * 2 - len / 2);
	else
		speed_level(len / sec);
}	
