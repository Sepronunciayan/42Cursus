#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    char *str1;
    char *str2;
    size_t i;

    str1 = (char *) s1;
    str2 = (char *) s2;
    i = 0;
    if (n == 0)
    {
        return (0);
    }
    else
    {
        while (str1[i] < n && str2[i] < n || str1[i] != '\0' && str2[i] != '\0')
        {
            if (str1[i] != str2[i])
            {
            return (str1[i] - str2[i]);   
            }
            i++;
        }        
    }
   return (0);
}

int main ()
{
    char *str1 ={"appLe"};
    char *str2 ={"appl"};
    int n;

    n = 5;
    printf("%d", ft_strncmp(str1, str2, n));
    return (0);
}