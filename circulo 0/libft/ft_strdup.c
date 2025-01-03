#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(const char *s)
{
    char *copy;
    int size;
    int i;
    while (s[size] != '\0')
    {
        size++;
    }
    copy = (char *)malloc((size + 1) * sizeof(char));
    if(copy == NULL)
    {
        return (NULL);
    }

    i = 0;
    while (i != size)
    {
        copy[i] = s[i];
        i++;
    }
    copy[size] = '\0';
    return (copy);
}

int main ()
{
    int i;
    char *str = {"Para implementar estas otras dos funciones"};
    char *copy;
    copy = ft_strdup(str);
    i = 0;
    while (copy[i] != '\0')
    {
        printf("%c", copy[i]);
        i++;
    }
    free(copy);
    return (0);
}

// char *ft_strdup(const char *s)
// {
//     char *str;
//     char *copy;
//     int size;
//     int i;

//     str = (char *)s;
//     copy = (char *)malloc(sizeof(str));
//     if(copy == NULL)
//     {
//         return (NULL);
//     }

//     i = 0;
//     while (*str)
//     {
//         copy[i] = s[i];
//        i++;
//        str++;
//     }
//     printf("%c", copy[i]);
//     return (copy);
// }

// int main ()
// {
//     int i;
//     char *str = {"Para implementar estas otras dos funciones"};
//     char *copy;
//     copy = ft_strdup(str);
//     i = 0;
//     while (copy[i] != '\0')
//     {
//         printf("%c", copy[i]);
//         i++;
//     }
//     free(copy);
//     return (0);
// }
