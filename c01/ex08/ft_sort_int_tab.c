/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:06:05 by ferdos-s          #+#    #+#             */
/*   Updated: 2024/09/03 13:10:55 by ferdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i +1])
			{
				temp = tab[i];
				tab[i] = tab[i +1];
				tab[i +1] = temp;
			}
			i++;
		}
		j++;
	}
}

/*int	main()
{
	int	tab[] = {8,1,9,4,2};
	int	size = 5;
	int	i = 0;
	ft_sort_int_tab(tab, size);
	while(i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
