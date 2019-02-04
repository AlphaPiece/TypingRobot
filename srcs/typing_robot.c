/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typing_robot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 12:26:09 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/04 15:02:03 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

int		*g_len_arr;
int		g_i = LIMIT;

void	title(void)
{
	ft_putncharln('#', LIMIT);
	ft_printf("\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n",
				TITLE1, TITLE2, TITLE3, TITLE4, TITLE5);
	ft_putncharln('#', LIMIT);
	ft_putchar('\n');
}

void	epilogue(void)
{
	ft_printf("%s\n%s\n%s\n%s\n\n",
				EPILOGUE1, EPILOGUE2, EPILOGUE3, EPILOGUE4);
}

int		main(void)
{
	title();
	interface();
	epilogue();
	return (0);
}
