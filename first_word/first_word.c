/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:17:05 by ancavalc          #+#    #+#             */
/*   Updated: 2023/12/12 13:19:01 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	if(ac == 2)
	{
		while (av[1][i] <= 32 && av[1][i])
			i++;
		while (av[1][i] && av[1][i] > 32)
		{ 
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);   
}
