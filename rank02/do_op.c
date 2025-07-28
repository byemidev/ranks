#include <limits.h>
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr_fd(int nbr, int fd)
{
	char	c;

	if (fd < 0)
		return ;
	if (INT_MIN == nbr)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	if (nbr / 10 > 0)
		ft_putnbr_fd(nbr / 10, fd);
	c = nbr % 10 + '0';
	ft_putchar(c);
}

int	ft_atoi(char *nbr)
{
	int	res;
	int	sign;

	if (!nbr)
		return (0);
	sign = 1;
	if (*nbr == '-')
	{
		sign = -1;
		nbr++;
	}
	res = 0;
	while (*nbr)
	{
		res = res * 10 + (*nbr - '0');
		nbr++;
	}
	return (res * sign);
}

int	main(int argc, char **argv)
{
	int	nbr_1;
	char	op;
	int	nbr_2;
	if (argc == 4)
	{
		nbr_1 = ft_atoi(argv[1]);
		nbr_2 = ft_atoi(argv[3]);
		op =(char) *argv[2];
		if (op == '+')
			ft_putnbr_fd(nbr_1 + nbr_2, 1);
		if (op == '-')
			ft_putnbr_fd(nbr_1 - nbr_2, 1);
		if (op == '*')
			ft_putnbr_fd(nbr_1 * nbr_2, 1);
		if (op == '/')
			ft_putnbr_fd(nbr_1 / nbr_2, 1);
		if (op == '%')
			ft_putnbr_fd(nbr_1 % nbr_2, 1);
/*
		printf("%d\n", nbr_1);
		printf("%d\n", nbr_2);
		printf("%c\n", op);	
*/	}
	ft_putchar('\n');
	return (0);
}
