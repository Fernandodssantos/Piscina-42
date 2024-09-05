/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:11:35 by ferdos-s          #+#    #+#             */
/*   Updated: 2024/08/28 13:01:25 by ferdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	a;

	a = 'a';
	while (a <= 'z')
	{	
		write (1, &a, 1);
	a++;
	}
}

/*int	main(void)

{
	ft_print_alphabet();
	return 0;
}*/
