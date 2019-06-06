/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   senten_generate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:57:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/06/05 20:10:32 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tybot.h"

char	*senten_generate(void)
{
	char	*line;
	int		num, index, i;
	char	*file;
	char	*path;
	int		fd;

	fd = open("data/names.txt", O_RDONLY);
	ft_nextline(fd, &line);
	num = ft_atoi(line);
	free(line);
	index = ft_randint(1, num);
	
