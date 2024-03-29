
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return "-2147483648";
	int len = (nbr <= 0) ? 1 : 0;
	int n = nbr;
	
	while (n && ++len)
		n /= 10;
	
	char *itoa = (char *)malloc(len + 1);
	if (!itoa)
		return (NULL);
	itoa[len] = '\0';
	if (nbr == 0)
        return strcpy(itoa, "0");
	
	if (nbr < 0)
		itoa[0] = '-' , nbr = -nbr;
	while (nbr)
		itoa[--len] = (nbr % 10) + '0', nbr /= 10;
	return (itoa);
}
