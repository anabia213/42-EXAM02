/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:00:09 by ancavalc          #+#    #+#             */
/*   Updated: 2023/12/12 16:07:26 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
    if (!src)
        return NULL;

    char *dup = malloc((strlen(src) + 1) * sizeof(char));

    if (dup)
        for (size_t i = 0; (dup[i] = src[i]) != '\0'; i++);

    return dup;
}

