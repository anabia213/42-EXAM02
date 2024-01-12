
#include <unistd.h>

int ft_atoi(char *s)
{
	int res;

	res = 0;
	while (*s)
		res = res * 10 + *s++ - 48;
	return (res);
}

void ft_putnbr(int i)
{
	char digit;

	if (i >= 10)
		ft_putnbr(i / 10);
	digit = i % 10 + '0';
	write(1, &digit, 1);
}

int is_prime(int i)
{
	int loop;

	loop = 2;
	if (i <= 1)
		return (0);
	while (loop * loop <= i)
	{
		if (i % loop == 0)
			return (0);
		loop++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i;
	int new_num;
	int given_num;

	i = 0;
	new_num = 0;

	if (argc == 2)
	{
		given_num = ft_atoi(&argv[1][i]);
		while (given_num > 0)
		{
			if (is_prime(given_num))
			{
				new_num += given_num;
			}
			given_num--;
		}
		ft_putnbr(new_num);
	}
	else
	{
		write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
