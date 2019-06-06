/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_mode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:12:35 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/06/05 17:57:01 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tybot.h"

static void	one_round(t_stat *stat)
{
	char	*output;
	char	*input;
	time_t  t1;
	time_t  t2;

	output = str_generate();
	ft_printf("%s\n", output);
	time(&t1);
	ft_nextline(1, &input);
	time(&t2);
	if (str_report(stat, output, input, t2 - t1))
		stat->round += 1;
	free(output);
	free(input);
}

void		str_mode(t_stat *stat)
{
	char	c;	

	do
	{
		system("clear");
		ft_putncharln('=', LIMIT);
		one_round(stat);
		ft_printf("\nNext round? (y/N)\n");
		c = ft_getonechar();
	} while (c != 'N');
	str_summary(stat);
}
