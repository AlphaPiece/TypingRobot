/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 18:31:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/07 11:35:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

void    title(void)
{
    system("clear");
    ft_putncharln('#', LIMIT);
    ft_printf("\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n",
                TITLE1, TITLE2, TITLE3, TITLE4, TITLE5);
    ft_putncharln('#', LIMIT);
    ft_putchar('\n');
}

void    epilogue(void)
{
    char    *s;

    s = "      .       .      .                 . .    .     .  .\n" \
    ". , , |-. ,-. |-   ,-| ,-. ,-. ,-. ,-. ' |-   | , . |  |    . . ,-. . .\n"\
    "|/|/  | | ,-| |    | | | | |-' `-. | |   |    |<  | |  |    | | | | | |\n"\
    "' '   ' ' `-^ `'   `-^ `-' `-' `-' ' '   `'   ' ` ' `' `'   `-| `-' `-^\n"\
    "                                                             /|\n" \
    "                                                            `-'\n" \
    "          .                               .\n" \
    ",-,-. ,-. | , ,-. ,-.   . . ,-. . .   ,-. |- ,-. ,-. ,-. ,-. ,-. ,-.\n" \
    "| | | ,-| |<  |-' `-.   | | | | | |   `-. |  |   | | | | | | |-' |\n" \
    "' ' ' `-^ ' ` `-' `-'   `-| `-' `-^   `-' `' '   `-' ' ' `-| `-' '\n" \
    "                         /|                               ,|\n" \
    "                        `-'                               `'\n";
    ft_printf("%s\n", s);
}

void	interface(void)
{
	char	mode;

	title();
	ft_printf("Please choose mode: \n" \
				"0. String Mode\n" \
				"1. Algorithm Mode\n");
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
	epilogue();
}
	
	
