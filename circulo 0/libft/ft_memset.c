#include <stdio.h>

char ft_memset(char *array, char c, int size)
 {
    int i;
    i = 0;
    while (i != size)
    {
        array[i] = c;
        i++;
    }
    return (*array);
 }

int main(void)
{
    char buffer[] = "This is a test of the memset function";

    printf("Before buffer: %s\n", buffer);
    ft_memset(buffer, '0', 4);
    printf("After buffer: %s\n", buffer);
}

