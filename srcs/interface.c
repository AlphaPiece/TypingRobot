/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 12:22:54 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/03 12:40:14 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

void	interface(void)
{
    char    *signal;
    char    *input;
    char    *output;

    ft_printf("Let's start training!\n");
	ft_putncharln('=', 80);
    signal = "";
    while (!ft_strequ(signal, "N"))
    {
        if (*signal)
            free(signal);
        output = generator();
        ft_printf("%s\n", output);
        free(output);
        ft_nextline(1, &input);
        free(input);
		ft_printf("\nNext line? (y/N)\n");
        ft_nextline(1, &signal);
		ft_putncharln('=', 80);
    }
    if (ft_strequ(signal, "N"))
        free(signal);
    ft_printf("Have a great day.\n");
}
