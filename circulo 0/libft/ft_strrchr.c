#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    char *str;
    char b;
    char *rchr;
    int i;
    
    str = (char *)s;
    b = (char) c;
    rchr = NULL;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == b)
        {
           rchr = &str[i];
        }  
        i++;
    }
    if (b == '\0')
    {
      return (&str[i]);  
    }
    return (rchr);
}

int main(void)
{
    const char *str;
    char c;
    char *result;

    str = "jean brand";
    c = 'n';
    result = ft_strrchr(str, c);
    if (result)
    {
        printf("%c\n", c);
        printf("%ld", result - str);
    }
    else
    {
        printf("%c no esta", c);
    }
    return (0);
}