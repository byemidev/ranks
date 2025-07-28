#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{	
	unsigned int unbr;

	unbr = (unsigned int) nbr;
	if (unbr >= 10)
		ft_putnbr(unbr / 10);
	ft_putchar((int) unbr%10 + '0');
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i%3 == 0 || i%5 == 0)
		{
			if (i%3 == 0 && i%5 != 0)
				write(1, "fizz", 5);
			else if (i%3 == 0 && i%5==0)
				write(1, "fizzbuzz", 9);
			else
				write(1, "buzz", 5);
		}
		else
			ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
