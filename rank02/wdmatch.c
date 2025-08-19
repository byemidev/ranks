/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 07:42:08 by garevalo          #+#    #+#             */
/*   Updated: 2025/08/19 08:24:40 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int len;
	int i;

	if (argc == 3)
	{
		len = 0;
		i = 0;
		while (argv[1][len])
			len++;
		while (i < len && *argv[2])
		{
			if (argv[1][i] == *argv[2]++)
				i++;
		}
		if (len == i)
			write(1, argv[1], i);
	}
	write(1, "\n", 1);
	return (1);
}
