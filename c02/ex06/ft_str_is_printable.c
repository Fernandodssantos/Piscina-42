/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:59:11 by ferdos-s          #+#    #+#             */
/*   Updated: 2024/09/05 12:13:32 by ferdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

/*#include <stdio.h>
int     main()
{
        char src[] = "FERNANDOé";
        int i = ft_str_is_printable(src);
        printf("%d", i);
        return 0;
}*/
