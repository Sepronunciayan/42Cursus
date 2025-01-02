#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *str;
    char *bsrt;
    size_t i;
    size_t j;

    str = (char *) haystack;
    bsrt = (char *) needle;
    i = 0;
    j = 0;
    while (i < len)
    {
        if(str[i] == bsrt[j])
        {
           return (&str[i]);
        }
        i++;
    }
    return (0);
}

int main ()
{
    const char *haystack = {"This is a test of the memset function"};
    const char *needle= {"memset"};
    char *result; 
    size_t len;

    len = 21;
    result = ft_strnstr(haystack, needle, len);
    if (result) {
        printf("encontrada: %s\n", result);
    } else {
        printf("no encontrada.\n");
    }

    return 0;;
}