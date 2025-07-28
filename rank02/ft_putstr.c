#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
//test fuction - main
int	main(void)
{
	char *str = "hoola ehhehe";

	ft_putstr(str);
	return (0);
}
