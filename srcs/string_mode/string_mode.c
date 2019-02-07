/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   string_mode.c                                      :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: Zexi Wang <twopieces0921@gmail.com>		+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2019/02/06 17:06:16 by Zexi Wang		 #+#	#+#			 */
/*   Updated: 2019/02/06 18:47:12 by Zexi Wang        ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include "typing_robot.h"

extern int		*g_len_arr;
extern int		g_i;
extern t_stat	stat;

static void		one_round(void)
{
	char	*input;
	char	*output;
	time_t  t1;
	time_t  t2;

	if (!(output = str_generate()))
		exit(1);
	ft_printf("%s\n", output);
	time(&t1);
	ft_nextline(1, &input);
	time(&t2);
	if (str_report(output, input, g_len_arr[g_i], t2 - t1))
		stat.round += 1;
	free(output);
	free(input);
}

void			string_mode(void)
{
	char	c;	

	ft_printf("\nReady? (y/N)\n");
	c = ft_getonechar();
	while (c != 'y')
	{
		ft_printf("Ready? (y/N)\n");
		c = ft_getonechar();
	}
	while (true)
	{
		system("clear");
		ft_putncharln('=', LIMIT);
		one_round();
		ft_printf("\nNext round? (y/N)\n");
		c = ft_getonechar();
		if (c == 'N')
			break ;
	}
	str_summary();
}
