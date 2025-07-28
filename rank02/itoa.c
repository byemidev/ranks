/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 22:03:54 by garevalo          #+#    #+#             */
/*   Updated: 2025/07/28 22:31:55 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <limits.h>
#include <stdlib.h>

//return a n lenght
size_t	ft_nlen(int n)
{
	size_t len;

	if (n == 0)
		return (1);
	if (n == INT_MIN)
		return (11);
	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_fillstr(char *str, int n, size_t size, int sign)
{
	if (sign == -1)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		size--;
		str[size] = (n % 10) + '0';
		n = n / 10;
	}
}

char *ft_itoa(int n)
{
	char *snum;
	size_t sizen;
	int	sign;

	if (n == INT_MIN)
		return "-2147483648";
	sizen = ft_nlen(n); //todo
	snum = (char *) malloc(sizeof(char) * sizen +1);
	if (!snum)
		return (NULL);
	snum[sizen] = '\0';
	if (n == 0)
	{
		snum[0] = '\0';
		return (snum);
	}
	sign = 1;
	if (n < 0)
		sign *= -1;
	ft_fillstr(snum, n, sizen, sign);//todo
	return (snum);
}

#include <stdio.h>
int	main(void)
{
	int n = -122;
	char *snum = ft_itoa(n);
	printf("%s", snum);
	return (0);
}
