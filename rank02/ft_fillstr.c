/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:40:47 by garevalo          #+#    #+#             */
/*   Updated: 2025/07/29 11:20:19 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_fillstr(char *sptr, int n, size_t size_n, int sign_flag)
{
	//asuming not null parameters. As *sptr right allocation in memmory
	if ( n < 0 && sign_flag < 0)
	{
		sptr[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		size_n--;
		sptr[size_n] = (n % 10) + '0'; //nbr to char char conversion
		n = n / 10; //taking the next unit
	}
}

//for testing
/*
int	get_sign(int nbr)
{
	if (nbr < 0)
		return (-1);
	else
		return (1);
}

size_t	ft_nlen(int n);

int	main(void)
{
	int	nbr = -122222;
	char *sptr =(char *) malloc(11 +1 * sizeof(char));
	size_t size_n = ft_nlen(nbr);
	int sign_flag = get_sign(nbr);
	ft_fillstr(sptr, nbr, size_n, sign_flag);
	printf("sptr :\n%s\n", sptr);
	free(sptr);
	return (0);
}
*/
