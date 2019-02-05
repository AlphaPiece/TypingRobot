/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typing_robot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 12:26:09 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/05 16:32:01 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

int		*g_len_arr;
int		g_i = LIMIT;

void	title(void)
{
	system("clear");
	ft_putncharln('#', LIMIT);
	ft_printf("\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n",
				TITLE1, TITLE2, TITLE3, TITLE4, TITLE5);
	ft_putncharln('#', LIMIT);
	ft_putchar('\n');
}

void	epilogue(void)
{
	char	*s;

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

int		main(void)
{
	title();
	interface();
	epilogue();
	return (0);
}
