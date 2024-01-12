/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:26:46 by ancavalc          #+#    #+#             */
/*   Updated: 2023/12/12 16:27:47 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 2;
    if (ac == 2)
    {
        int nb = atoi(av[1]);
        if (nb == 1)
            printf("1");
        while (i <= nb)
        {
            if (nb % i == 0)
            {
                printf("%d", i);
                if (i != nb)
                    printf("*");
                nb /= i;
                i = 2;
            }
            else
                i++;
        }
    }
    printf("\n");
}
