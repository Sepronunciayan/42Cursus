#include <string.h>
#include <stdio.h>

void *memchr(const void *s, int c, size_t n)
{
    char *ptr;
    unsigned char value;
    size_t i;

    value = (unsigned char) c;
    ptr = (char *) s;
    i = 0;
    while (i < n)
    {
        if (ptr[i] == value)
        {
            return (&ptr[i]);
        }
        i++;
    }
    return (NULL);
}

int main() {
    const char *str = "Hello, world!";
    char c = 'o';
    
    void *result = memchr(str, c, strlen(str));
    
    if (result != NULL) {
        printf("Found '%c' at position: %ld\n", c, (char*)result - str);
    } else {
        printf("Character '%c' not found\n", c);
    }

    return 0;
}
                          