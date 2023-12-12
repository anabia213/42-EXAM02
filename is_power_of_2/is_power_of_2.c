/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:21:34 by ancavalc          #+#    #+#             */
/*   Updated: 2023/12/12 13:27:38 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(int n)
{
	if (n <= 0)
		return (0);
	return (n & (n - 1)) == 0;
}
