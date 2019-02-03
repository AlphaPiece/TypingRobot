/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 20:42:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/02 21:22:53 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typing_robot.c"

char    *generate_str(void)
{
    char    c;
    int     len;
    char    *str;
    int     i;

    len = ft_randint(10, 80);
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = 0;
    while (i < len)
        str[i++] = ft_randint(LB, UB);
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
        ft_readline(1, &input);
    }
    if (ft_strequ(input, "quit"))
        free(input);
    ft_printf("Have a great day.\n");
    return (0);
}
