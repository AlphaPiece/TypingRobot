/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_generate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 00:05:24 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/06/05 16:20:11 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tybot.h"

char	*str_generate(void)
{
	int		len;
	int		c;
	char	*s;
	int		i;

	len = ft_randint(STR_LEN_LB, STR_LEN_UB);
	if (!(s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = ft_randint(ASCII_LB, ASCII_UB);
	s[i] = '\0';
	return (s);
}
