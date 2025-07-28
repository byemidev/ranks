#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_isspace(int c)
{
	return (c == '\t'|| c == ' ');
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;
	
	i = 0;
	if (argc == 2)
	{
		//obtenemos la primera palabra
		
		while (ft_isspace((int) argv[1][i]))
				i++;
		while (argv[1][i] != '\0')
		{
			c = (int) argv[1][i];
			if (!ft_isalpha(c) && ft_isspace(c))
				break;
			ft_putchar(c);
			i++;
		}
	}
	ft_putchar('\n');//en cualquier caso debemos imprimir un salto de linea
	return (0);
}
