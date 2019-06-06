/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tybot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 18:31:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/06/05 17:49:37 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tybot.h"

void    title(void)
{
	ft_printf("tybot 1.0\n");
	ft_printf("Created by AlphaPiece Studio.\n\n");
	ft_printf("0. String Mode\n1. Sentence Mode\n\n");
}

void    epilogue(void)
{
    char    *s;
   
	ft_putncharln('=', LIMIT);
	ft_printf("\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n\n",
                EPI1, EPI2, EPI3, EPI4, EPI5);
}

int		main(void)
{
	t_stat	stat = {0, 0, 0, 0};
	char	mode, c;
	
	title();
	do
	{
		ft_printf("Please choose mode: ");
		mode = ft_getonechar();
	} while (mode != '0' && mode != '1');
	do
	{
		ft_printf("Ready? (y/N)\n");
		c = ft_getonechar();
	} while (c != 'y');
	switch (mode)
	{
		case '0':
			str_mode(&stat);
			break ;
		case '1':
			senten_mode(&stat);
			break ;
	}
	epilogue();
}
