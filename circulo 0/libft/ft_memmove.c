#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned const char *s;    
    size_t i;

    d = (unsigned char *) dest;    
    s = (unsigned const char *) src;
    i = 0;
    while (s[i] != '\0')
    {
        if (i <= n)
        {
            d[i] = s[i];
        }
        i++;
    }
    return (d);
}

int main(void)
{
    char buffer[] = "This is a test of the memset function";
    char *copy;
    int n;

    n = 5;
    printf("Before buffer: %s\n",  buffer);
    printf("Before copy: %s\n", copy);
    ft_memmove(copy,buffer,n);
    printf("After copy: %s\n", copy);
    printf("After buffer: %s\n",  buffer);
}