/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 20:42:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/03 12:28:49 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

char    *generator(void)
{
    int     len;
	int		*arr;
    char    *str;
    int     i;

    len = 20;
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
	arr = ft_randintarr(LB, UB, len);
	i = -1;
	while (++i < len)
		str[i] = (char)arr[i];
	str[i] = '\0';
    return (str);
}
