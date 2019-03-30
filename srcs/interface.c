/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 18:31:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/03/30 14:07:19 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

void    title(void)
{
	ft_printf("tybot 1.0\n");
	ft_printf("Created by AlphaPiece Studio.\n");
}

void    epilogue(void)
{
    char    *s;
    
	ft_printf("\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n",
                EPI1, EPI2, EPI3, EPI4, EPI5);
	ft_putnchar('=', LIMIT);
}

void	interface(void)
{
	char	mode;

	title();
	string_mode();
	epilogue();
}
