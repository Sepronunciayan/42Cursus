#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    char *str;
    char b;
    int i;

    str = (char *)s;
    b = (char) c;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == b)
        {
           return (&str[i]); 
        }  
        i++;
    }
    if (b == '\0')
    {
      return (&str[i]);  
    }
    return (NULL);
}

int main(void)
{
    const char *str;
    char c;
    char *result;

    str = "jean brand";
    c = 'a';
    result = ft_strchr(str, c);
    if (result != NULL)
    {
        printf("%c\n", c);
        printf("%s\n", result);
    }
    else
    {
        printf("%c\n", c);
    }
    return (0);
}
