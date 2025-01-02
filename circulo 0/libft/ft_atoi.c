#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *nptr)
{
    char *str;
    int i;
    int sign;
    int rest;
    int result;

    str = (char *) nptr;
    i = 0;
    rest = 0;
    result = 0;
    sign = -1;
    
    
    while (str[i] != '\0')
    {
        rest =(str[i] - 48);
        if (str[i] > 47 && str[i] < 58)
        {
            result = result * 10 + rest; 
        }
        i++;
    } 
    i = 0;  
    while (str[i] != '\0')
    {
        if (str[i] == 45 )
        {
            return (result * sign);
        }
        i++;
    }
    return (result);
}

int main ()
{
    printf("%d\n", ft_atoi("123"));
    printf("%d\n", ft_atoi(" -45"));
    printf("%d\n", ft_atoi("42abc"));
    printf("%d\n", ft_atoi("abc42"));
    printf("%d\n", ft_atoi("+987"));
    printf("%d\n", ft_atoi("9999999999"));
    printf("%d\n", ft_atoi("-9999999999"));
    
    return (0);
}