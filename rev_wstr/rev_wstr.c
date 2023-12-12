/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:34:55 by ancavalc          #+#    #+#             */
/*   Updated: 2023/12/12 18:35:11 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0, start = 0, end = 0;
    if (ac == 2)
    {
        while(av[1][i])
            i++;
        i--;
        while (i >= 0)
        {
            end = i;
            while (av[1][i] > 32)
                i--;
            start = i + 1;
            while (start <= end)
            {
                write(1, &av[1][start], 1);
                start++;
            }
            if (i != -1)
                write(1, " ", 1);
            i--;
        }
    }
    write(1, "\n", 1);
}
