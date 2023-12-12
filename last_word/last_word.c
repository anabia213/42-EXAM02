/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:42:11 by ancavalc          #+#    #+#             */
/*   Updated: 2023/12/12 17:42:17 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int ac, char **av)
{
    int	i;
	char	*str;

	i = 0;
	if (ac == 2)
	{
		str = av[1];
		while (str && str[i])
			i++;
		i--;
		while (str[i] == ' ' || str[i] == '\t')
			i--;
		while (str[i] >= 33 && str[i] <= 126)
			i--;
		i++;
		while (str[i] >= 33 && str[i] <= 126)
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
