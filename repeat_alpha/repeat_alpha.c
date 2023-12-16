/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:13:40 by ancavalc          #+#    #+#             */
/*   Updated: 2023/12/16 18:13:46 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int count = 0;
    if(ac == 2)
    {
        while (av[1][i])
        {
            if(av[1][i] >= 'A' && av[1][i] <= 'Z') 
                count = av[1][i] - 64;
            else if (av[1][i] >= 'a' && av[1][i] <= 'z')
                count = av[1][i] - 96;
            else
                write(1, &av[1][i], 1);
            while (count--)
                write(1, &av[1][i], 1);
            count = 0;
            i++;
        }
    }
    write(1, "\n", 1);
}
