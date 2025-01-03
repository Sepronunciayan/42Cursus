#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t memtotal;
    void *memory;
    size_t i;

    if (nmemb > 0 && size > SIZE_MAX / nmemb)
    {
    return (NULL); 
    }

    memtotal = (nmemb * size);
    memory = malloc(memtotal);
        if (memory == NULL) {
            printf("Error: No se pudo asignar memoria.\n");
            return NULL;
        } 
    unsigned char *ptr = (unsigned char *)memory;
    i = 0;
    while (i != memtotal)
    {
        ptr[i] = 0;
        i++;
    }
    return (memory);
}

int main()
{
    size_t nmemb;
    int *array;
    size_t i;

    nmemb = 10;
    array = (int *)ft_calloc(nmemb, sizeof(int));
    if (array == NULL) {
        return 1;
    }
    i = 0;
    while (i < nmemb)
    {
        printf("array[%d] = %d\n", i, array[i]);
        i++;
    }
    free(array);
    return 0;
}