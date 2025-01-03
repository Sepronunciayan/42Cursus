#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int result;
    int rest;

    i = 0;
    sign = 1;
    result = 0;
	while(nptr[i] == ' ')
	i++;
    if (nptr[i] == 45 || nptr[i] == 43)
    {
        if (nptr[i] == 45)
            sign = -1;
        i++;    
    }
    while (nptr[i] >= 48 && nptr[i] <= 57)
    {
		rest = (nptr[i] - 48);
        result = result * 10 + rest;
        i++;
    } 
    return (result * sign);
}

int main ()
{
    printf("%d\n", ft_atoi("123"));
    printf("%d\n", ft_atoi(" -45"));
    printf("%d\n", ft_atoi("   -45"));
    printf("%d\n", ft_atoi("42abc"));
    printf("%d\n", ft_atoi("    -ab42abc"));
    printf("%d\n", ft_atoi("abc42"));
    printf("%d\n", ft_atoi("+-987"));
    printf("%d\n", ft_atoi("-987"));
    printf("%d\n", ft_atoi("9999999999"));
    printf("%d\n", ft_atoi("-9999999999"));
    
    return (0);
}