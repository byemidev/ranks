#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *nptr)
{
	int	res;
	int	sign;
	if (*nptr == '\0')
		return (0);
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	res = 0;
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - '0');
		nptr++;
	}
	return (res * sign);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nbr)
{
	//prints an integer as char *
	unsigned int nb;

	if (nbr < 0)
	{	
		ft_putchar('-');
		nb = -nbr;	
	}
	else
		nb = nbr;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int is_prime(int nbr)
{
	int x;

	if (nbr <= 1)
		return (0);
	if (nbr <= 3)
		return (1);
	if (nbr % 2 == 0 || nbr % 3 == 0)
		return (0);
	x = 5;
	while (x * x <= nbr)
	{
		if (nbr % x == 0 || nbr % (x + 2) == 0)
			return (0);
		x += 6;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	num;
	int	sum;

	num = 0;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num <= 0)
			return (0);
		sum = 0;
		while (num > 1)
		{
			if (is_prime(num))
				sum += num;
			num--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
