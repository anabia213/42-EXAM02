
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);

		if (num1 != 0 || *argv[1] == '0') 
		{
			char op = argv[2][0];
			int result = 0;
			
			if (op == '+') 
			{
				result = num1 + num2;
			} else if (op == '-') {
				result = num1 - num2;
			} else if (op == '*') {
				result = num1 * num2;
			} else if (op == '/') {
				result = num1 / num2;
			} else if (op == '%') {
				result = num1 % num2;
			}
			
			printf("%d\n", result);
			return (0);
		}
	}

	printf("\n");
	return (0);
}
