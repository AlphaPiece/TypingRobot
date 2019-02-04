/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 19:37:38 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/03 19:37:43 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

extern int	*g_len_arr;
extern int	g_i;

char		*generator(void)
{
 	int		*arr;
	char	*str;
	int	 i;

	if (!(str = (char *)malloc(sizeof(char) * (g_len_arr[++g_i] + 1))))
		return (NULL);
	arr = ft_randintarr(LB, UB, g_len_arr[g_i]);
	i = -1;
	while (++i < g_len_arr[g_i])
		str[i] = (char)arr[i];
	str[i] = '\0';
	return (str);
}
