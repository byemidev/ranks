/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 08:36:53 by garevalo          #+#    #+#             */
/*   Updated: 2025/07/29 11:07:42 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

//returns a positive len of any int in [INT_MIN] to [INT_MAX]
size_t	ft_nlen(int n)
{
	size_t len;

	len = 0;
	if (n == 0)
		return (1);
	if (INT_MIN == n)
		return (11);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	int	n = 400;
	int m = -120;

	size_t n1 = ft_nlen((size_t) n);
	size_t n2 = ft_nlen((size_t) m);

	printf("%zu\n%zu", n1, n2);
	return (0);
}
*/
