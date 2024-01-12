
#include <unistd.h>

int     main(int ac, char **av)
{
    int	i;
	char	*str;

	i = 0;
	if (ac == 2)
	{
		str = av[1];
		while (str && str[i])
			i++;
		i--;
		while (str[i] == ' ' || str[i] == '\t')
			i--;
		while (str[i] >= 33 && str[i] <= 126)
			i--;
		i++;
		while (str[i] >= 33 && str[i] <= 126)
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
