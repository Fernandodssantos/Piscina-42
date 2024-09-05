/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:03:17 by ferdos-s          #+#    #+#             */
/*   Updated: 2024/09/05 11:43:38 by ferdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}

/*#include <stdio.h>
int     main()
{
        char src[] = "1234f";
        int i = ft_str_is_numeric(src);
        printf("%d", i);
        return 0;
}*/
