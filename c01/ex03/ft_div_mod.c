/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:47:27 by ferdos-s          #+#    #+#             */
/*   Updated: 2024/09/03 13:06:49 by ferdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
}
/*int	main()
{

	int	a = 10;
	int	b = 3;
	int	div;
	int	mod;
	ft_div_mod(a, b, &div, &mod);
	printf("Resulta em: %d\n", div);
	printf("Resto: %d\n", mod);
	return 0;
}*/
