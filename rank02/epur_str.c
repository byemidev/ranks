#include <unistd.h>


void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_isspace(int c)
{
	return (c == 32 || c == '\t');
}

int	main(int argc, char **argv)
{
	int	i;
	int	isspace;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			while (ft_isspace(argv[1][i]))
			{
				isspace++;
				if (isspace == 1)
					ft_putchar(32);
				i++;
			}
			ft_putchar(argv[1][i]);
			isspace = 0;
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
