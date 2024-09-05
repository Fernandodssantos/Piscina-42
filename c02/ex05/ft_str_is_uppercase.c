/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:46:51 by ferdos-s          #+#    #+#             */
/*   Updated: 2024/09/05 12:11:34 by ferdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 64 || *str > 90)
			return (0);
		str++;
	}
	return (1);
}

/*#include <stdio.h>
int     main()
{
        char src[] = "FERNANDO";
        int i = ft_str_is_uppercase(src);
        printf("%d", i);
        return 0;
}*/
