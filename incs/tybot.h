/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tybot.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 21:16:51 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/06/05 17:42:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYBOT_H
# define TYBOT_H

# include "libft.h"
# include <dirent.h>

# define ASCII_LB	33
# define ASCII_UB	126
# define STR_LEN_LB	10
# define STR_LEN_UB	80
# define LIMIT		80

# define EPI1		"--.--          o              ,---.     |         |"
# define EPI2		"  |  ,   .,---..,---.,---.    |---',---.|---.,---.|---"
# define EPI3		"  |  |   ||   |||   ||   |    |  \\ |   ||   ||   ||"
# define EPI4		"  `  `---||---'``   '`---|    `   ``---'`---'`---'`---'"
# define EPI5		"     `---'|          `---'     As precise as a robot."

typedef struct	s_stat
{
	int			chr;
	int			sec;
	int			typo;
	int			round;
}				t_stat;

void			str_mode(t_stat *stat);
char			*str_generate(void);
t_bool			str_report(t_stat *stat, char *output, char *input, int sec);
void			str_summary(t_stat *stat);

void			senten_mode(t_stat *stat);

#endif
