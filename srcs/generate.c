/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 20:42:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/02 21:57:42 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.h"

char    *generate_str(void)
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

int     main(void)
{
    char    *input;
    char    *output;

    input = "";
    while (!ft_strequ(input, "quit"))
    {
        if (*input)
            free(input);
        output = generate_str();
        ft_printf("%s\n", output);
        free(output);
        ft_nextline(1, &input);
    }
    if (ft_strequ(input, "quit"))
        free(input);
    ft_printf("Have a great day.\n");
    return (0);
}
