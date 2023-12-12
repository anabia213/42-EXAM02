/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 06:09:38 by ancavalc          #+#    #+#             */
/*   Updated: 2023/12/08 06:14:04 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max( int *tab, unsigned int len)
{
	unsigned int i = 0;
	int result = tab[i];
	while(i < len)
	{
		if (result <  tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}
