/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_generate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 00:05:24 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/07 00:21:09 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

extern int	*g_len_arr;
extern int	g_i;

char		*str_generate(void)
{
 	int		*arr;
	char	*str;
	int	 	i;

	if (g_i >= LIMIT)
		reset_randint(STR_LEN_LB, STR_LEN_UB);
	if (!(str = (char *)malloc(sizeof(char) * (g_len_arr[++g_i] + 1))))
		return (NULL);
	arr = ft_randintarr(ASCII_LB, ASCII_UB, g_len_arr[g_i]);
	i = -1;
	while (++i < g_len_arr[g_i])
		str[i] = (char)arr[i];
	str[i] = '\0';
	return (str);
}
