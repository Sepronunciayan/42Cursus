#include <stdio.h>

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int result;

    i = 0;
    result = 0;
    sign = -1;
	while(nptr[i] == ' ')
	i++;
	    
    if (nptr[i] >= 65 && nptr[i] <= 90 
		|| nptr[i] >= 97 && nptr[i] <= 122)
		return (0);
    if (nptr[i] == 45)
            return (result * sign);

    else if (nptr[i] == 45 && nptr[i + 1] == 43)
            return (0);	 
	i = 0; 
    while (nptr[i] != '\0')
    {
        if (nptr[i] > 47 && nptr[i] < 58)
		result = result * 10 + (nptr[i] - 48);
        i++;
    } 
     
   
    return (result);
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
