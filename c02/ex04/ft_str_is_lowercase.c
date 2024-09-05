/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:33:30 by ferdos-s          #+#    #+#             */
/*   Updated: 2024/09/05 11:46:35 by ferdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 97 || *str > 122)
			return (0);
		str++;
	}
	return (1);
}

/*#include <stdio.h>
int     main()
{
        char src[] = "ferdos";
        int i = ft_str_is_lowercase(src);
        printf("%d", i);
        return 0;
}*/
