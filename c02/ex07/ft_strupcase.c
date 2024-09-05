/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:21:17 by ferdos-s          #+#    #+#             */
/*   Updated: 2024/09/05 19:58:00 by ferdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += -32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <unistd.h>
int     main()
{
        char str[88] = "fernand6565o";
        printf("%s",ft_strupcase(str));
        return 0;
}*/
