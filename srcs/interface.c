/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 18:31:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/03 20:35:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

extern int	*g_len_arr;
extern int	g_i;

void		one_round(void)
{
	char	*input;
	char	*output;
	time_t	t1;
	time_t	t2;

	output = generator();
	ft_printf("%s\n", output);
	time(&t1);
	ft_nextline(1, &input);
	time(&t2);
	report(output, input, g_len_arr[g_i], t2 - t1);
	free(output);
	free(input);
}

void		interface(void)
{
	char	*signal;

	signal = "";
	while (!ft_strequ(signal, "y"))
	{
		if (*signal)
			free(signal);
		ft_printf("Ready? (y/N)\n");
		ft_nextline(1, &signal);
	}
	system("clear");
	ft_putncharln('=', LIMIT);
	while (!ft_strequ(signal, "N"))
	{
		free(signal);
		one_round();
		ft_printf("\nNext round? (y/N)\n");
		ft_nextline(1, &signal);
		system("clear");
		ft_putncharln('=', LIMIT);
	}
	if (ft_strequ(signal, "N"))
		free(signal);
}
