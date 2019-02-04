/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   report.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 15:08:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/04 15:43:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

t_stat	stat;

void	speed_level(int cps)
{
	if (cps >= 16)
		ft_printf("Speed: " CYAN "S\n" RESET);
	else if (cps >= 8)
		ft_printf("Speed: " MAGENTA "A\n" RESET);
	else if (cps >= 4)
		ft_printf("Speed: " GREEN "B\n" RESET);
	else if (cps >= 2)
		ft_printf("Speed: " YELLOW "C\n" RESET);
	else
		ft_printf("Speed: " RED "D\n" RESET);
}

t_bool	accuracy_level(int typo)
{
	if (typo == 0)
		ft_printf("Accuracy: " MAGENTA "Excellent\n" RESET);
	else if (typo == 1)
		ft_printf("Accuracy: " GREEN "Good\n" RESET);
	else if (typo == 2)
		ft_printf("Accuracy: " YELLOW "Adequate\n" RESET);
	else
	{
		ft_printf("Accuracy: " RED "Inadequate\n" RESET);
		return (false);
	}
	return (true);
}

t_bool	report(char *output, char *input, int len, int sec)
{
	int		i;
	int		typo;
	t_bool	is_valid;

	is_valid = false;
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
	ft_printf("Characters: %d\n", len);
	ft_printf("Time: %ds\n", sec);
	if (accuracy_level(typo))
	{
		is_valid = true;
		stat.chr += len;
		stat.sec += sec;
		stat.typo += typo;
	}	
	if (sec == 0)
		speed_level(len * 2 - len / 2);
	else
		speed_level(len / sec);
	return (is_valid);
}

void	summary(void)
{
	ft_printf("\t\t\t\t>>> Summary <<<\n");
	ft_putncharln('-', LIMIT);
	ft_printf("Characters: %d\n", stat.chr);
	ft_printf("Time: %ds\n", stat.sec);
	accuracy_level(stat.typo / stat.round);
	if (stat.sec == 0)
		speed_level(stat.chr * 2 - stat.chr / 2);
	else
		speed_level(stat.chr / stat.sec);
	ft_putncharln('=', LIMIT);
}
