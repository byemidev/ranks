/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 07:30:09 by garevalo          #+#    #+#             */
/*   Updated: 2025/08/19 07:40:45 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	int	res;

	i = 8;
	res = 0;
	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (res);
}

int	main(void)
{
	unsigned char	bit;
	unsigned char	res;
	int				i;
	
	bit = 0;
	res = reverse_bits((unsigned char) 3);
	i = 8;
	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
	return (0);
}
