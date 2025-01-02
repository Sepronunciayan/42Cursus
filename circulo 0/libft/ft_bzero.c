#include <stdio.h>

char ft_bzero(char *array, int size)
 {
    int i;
    i = 0;
   
    while (i != size)
    {
        array[i] = '0';
        i++;
    }
    return (*array);
 }

int main(void)
{
    char buffer[] = "This is a test of the memset function";

    printf("Before buffer: %s\n", buffer);
    ft_bzero(buffer,sizeof(buffer));
    printf("After buffer: %s\n", buffer);
}