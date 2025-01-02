#include <stdio.h>

char ft_memcpy(char *copy, char *array, int size)
 {
    int i;
    i = 0;
   
    while (i != size)
    {
        copy[i] = array[i];
        i++;
    }
    return (*array);
 }

int main(void)
{
    char buffer[] = "This is a test of the memset function";
    char *copy;
    printf("Before buffer: %s\n",  buffer);
    printf("Before copy: %s\n", copy);
    ft_memcpy(copy,buffer,sizeof(buffer));
    printf("After copy: %s\n", copy);
    printf("After buffer: %s\n",  buffer);
}