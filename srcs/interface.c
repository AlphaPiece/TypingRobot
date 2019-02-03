/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 12:22:54 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/03 16:14:09 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

void	interface(void)
{
    char    *signal;
    char    *input;
    char    *output;

    ft_printf("Let's start training!\n");
	ft_putncharln('=', LIMIT);
    signal = "";
    while (!ft_strequ(signal, "N"))
    {
        if (*signal)
            free(signal);
        output = generator();
        ft_printf("%s\n", output);
        ft_nextline(1, &input);
		report(output, input, 20, 100);
		free(output);
        free(input);
		ft_printf("\nNext line? (y/N)\n");
        ft_nextline(1, &signal);
		ft_putncharln('=', LIMIT);
    }
    if (ft_strequ(signal, "N"))
        free(signal);
    ft_printf("Have a great day.\n");
}
