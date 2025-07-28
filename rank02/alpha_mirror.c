#include <unistd.h>


void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isupper(int	c)
{
	return (c >= 'A' && c <= 'Z');
}

void *ft_mirror_lower(int c)
{
	char mirrored;
	
	mirrored = 'z' - (c - 'a');
	ft_putchar(mirrored);
}

int	ft_mirror_upper(int c)
{
	int mirrored;

	mirrored = 'Z' - (c - 'A');
	ft_putchar(mirrored);
}	

int	main(int argc, char **argv)
{
	int	i;
	int	c;
	int	x;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			c = (unsigned char) argv[1][i];
			if (ft_islower(c))
				ft_mirror_lower(c);
			else if (ft_isupper(c))
				ft_mirror_upper(c);
			else
				ft_putchar(c);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
