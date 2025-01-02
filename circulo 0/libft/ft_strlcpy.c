#include <string.h>
#include <stdio.h>

void ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    
    if(size > 0)
    {
        i = 0;
        while (src[i] != '\0')
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
}

int main(void)
{
    char buffer[] = "This is a test of the memset function";
    char *copy;
    int n;

    n = 5;
    printf("Before buffer: %s\n",  buffer);
    printf("Before copy: %s\n", copy);
    ft_strlcpy(copy,buffer,sizeof(buffer));
    printf("After copy: %s\n", copy);
    printf("After buffer: %s\n",  buffer);
}