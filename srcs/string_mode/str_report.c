/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_report.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 15:08:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/09 12:10:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

t_stat	stat;

void	speed_level(int len, int sec)
{
	int		cps;
	int		sec_to_next_lev;
	char	next_lev;

	if (sec == 0)
		cps = len * 2 - len / 2;
	else
		cps = len / sec;
	if (cps >= 16)
	{
		ft_printf("Speed: " CYAN "S " RESET);
		sec_to_next_lev = 0;
	}
	else if (cps >= 8)
	{
		ft_printf("Speed: " MAGENTA "A " RESET);
		sec_to_next_lev = sec - len / 16;
		next_lev = 'S';
	}
	else if (cps >= 4)
	{
		ft_printf("Speed: " GREEN "B " RESET);
		sec_to_next_lev = sec - len / 8;
		next_lev = 'A';
	}
	else if (cps >= 2)
	{
		ft_printf("Speed: " YELLOW "C " RESET);
		sec_to_next_lev = sec - len / 4;
		next_lev = 'B';
	}
	else
	{
		ft_printf("Speed: " RED "D " RESET);
		sec_to_next_lev = sec - len / 2;
		next_lev = 'C';
	}
	if (sec_to_next_lev == 0 && len != 0)
		ft_printf(CYAN "[Legendary!]\n" RESET);
	else
		ft_printf("[-%ds -> %c]\n", sec_to_next_lev, next_lev);
}

t_bool	accuracy_level(int typo)
{
	if (stat.typo == 0 && stat.round >= 100)
		ft_printf("Accuracy: " CYAN "Perfect\n" RESET);
	else if (typo == 0)
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

t_bool	str_report(char *output, char *input, int len, int sec)
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
			ft_printf(RED "%c" RESET, output[i]);
			typo++;
		}
		else
			ft_printf(" ");
	ft_printf("\n");
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
	if (typo < 3 && len > 0)
		speed_level(len, sec);
	return (is_valid);
}		

void	str_summary(void)
{
	system("clear");
	ft_putncharln('=', LIMIT);
	ft_putnchar(' ', 32);
	ft_printf(">>> Summary <<<\n");
	ft_putncharln('-', LIMIT);
	ft_printf("Characters: %d\n", stat.chr);
	ft_printf("Time: %ds\n", stat.sec);
	if (stat.round > 0)
		accuracy_level(stat.typo / stat.round);
	if (stat.round > 0 && stat.typo / stat.round < 3)
		speed_level(stat.chr, stat.sec);
	ft_printf("\n(Note: Rounds with inadequate accuracy were not recorded.)\n");
	ft_putncharln('=', LIMIT);
}
