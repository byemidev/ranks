#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{	
			if (ft_isupper(argv[1][i]))
			{	
				ft_putchar('_');
				argv[1][i] += 32;
			}
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
