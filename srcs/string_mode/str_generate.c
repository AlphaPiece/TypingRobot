/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_generate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 19:37:38 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/06 17:25:30 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

extern int	*g_len_arr;
extern int	g_i;

char		*str_generate(void)
{
 	int		*arr;
	char	*str;
	int	 i;

	if (g_i + 1 >= LIMIT)
	{
		if (g_i == LIMIT)
			free(g_len_arr);
		if (!(g_len_arr = ft_randintarr(10, 80, LIMIT)))
			return (NULL);
		g_i = -1;
	}
	if (!(str = (char *)malloc(sizeof(char) * (g_len_arr[++g_i] + 1))))
		return (NULL);
	arr = ft_randintarr(LB, UB, g_len_arr[g_i]);
	i = -1;
	while (++i < g_len_arr[g_i])
		str[i] = (char)arr[i];
	str[i] = '\0';
	return (str);
}
