/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:23:48 by ferdos-s          #+#    #+#             */
/*   Updated: 2024/09/03 13:10:12 by ferdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size -1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*int	main()
{
	int	tab[] = {1,2,3,4,5};
	int	size = 5;
	int	i = 0;

	ft_rev_int_tab(tab, size);

	while(i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}*/
