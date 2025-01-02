#include <string.h>
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t src_size;
    size_t i;

    src_size = 0;
    while (src[src_size] != '\0')
    {
        src_size++;
    }
    i = 0;
    while (src[i] != '\0')
    {
        dst[size + i -1] = src[i];
        i++;
    }
    dst[size + i - 1] = '\0';
    return (size + src_size);
}

int main(void)
{
    char src[] = "brand";
    char dst[] = "jean ";
    int result;
    printf("Before src: %s\n",  src);
    printf("Before dst: %s\n", dst);
    result = ft_strlcat(dst,src,sizeof(dst));
    printf("After dst: %s\n", dst);
    printf("size dst + size src: %i\n", result);
    printf("size dst: %i\n", sizeof(dst));
}