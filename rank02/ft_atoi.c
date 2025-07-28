#include <stdio.h>
#include <stdlib.h>

int	ft_isspace(int c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v');
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int  ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	if (!nptr)
		return (0);
	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '-' || *nptr == '+' )
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	num = 0;
	while (ft_isdigit(*nptr))
	{
		num = num * 10 +  (*nptr - '0');
		nptr++;
	}
	return 	(num * sign);
}

int	main(int argc, char **argv)
{
	int	d;

	if (argc == 2)
	{
		d = ft_atoi(&(*argv[1]));
		printf("%d\n", d);
		d = atoi(&(*argv[1]));
		printf("%d", d);
	}
}
