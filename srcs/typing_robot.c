/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typing_robot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 12:26:09 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/03 20:37:17 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

int		*g_len_arr;
int		g_i = -1;

void	title(void)
{
	ft_putncharln('#', LIMIT);
	ft_printf("%s\n%s\n%s\n%s\n%s\n", TITLE1, TITLE2, TITLE3, TITLE4, TITLE5);
	ft_putncharln('#', LIMIT);
	ft_putchar('\n');
}

void	epilogue(void)
{
	ft_printf("%s\n%s\n%s\n%s\n\n", EPILOGUE1, EPILOGUE2, EPILOGUE3, EPILOGUE4);
}

int		main(void)
{
	title();
	if (!(g_len_arr = ft_randintarr(10, 80, LIMIT)))
		return (1);
	interface();
	epilogue();
	return (0);
}
