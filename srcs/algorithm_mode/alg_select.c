/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_select.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 22:38:33 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/07 00:24:47 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

extern int	*g_len_arr;
extern int	g_i;

void		alg_update(void)
{
	DIR				*d;
	struct dirent	*dir;
	int				fd;

	fd = open("data/algs/index.txt", O_WRONLY);
	d = opendir("data/algs");
	if (fd > 0 && d)
	{
		while (dir = readdir(d))
			ft_dprintf(fd, "%s\n", dir->d_name);
		close(fd);
		closedir(d);
	}
}

int			alg_select(char ***code)
{
	static char	**alg_lst;
	static int	lst_len;
	int			line_num;
	
	if (lst_len == 0)
		lst_len = ft_readlines("data/algs/index.txt", &alg_lst);
	if (g_i >= LIMIT)
		reset_randint(0, lst_len - 1);
	return (ft_readlines(alg_lst[g_len_arr[i]], code));
}
