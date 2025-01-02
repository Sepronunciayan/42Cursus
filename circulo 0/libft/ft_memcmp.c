#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *str1;
    const char *str2;
    size_t i;

    str1 = (const char *) s1;
    str2 = (const char *) s2;
    i = 0;
    while (i < n)
    {
       if(str1[i] != str2[i])
       {
            return (str1[i] - str2[i]);
       } 
       printf("%c %d\n",str1[i], i);
       i++;
    } 
    return (0);
}

int main ()
{
    const char str1[] = {"cada uno int"}; 
    const char str2[] = {"cada uno interpretado como unsigned char"}; 
    printf("%d",ft_memcmp(str1,str2, 12));

    return (0);
}

// este codigo va incluido en la funcion principal, 
// evita que si alguna de las cadenas de memoria es mas pequeña que la otra y n es
//  mayor a la longitud de alguna no se compare mas alla del valo dado 

// size_t len1 = strlen(s1);
// size_t len2 = strlen(s2);
// size_t max_n = (len1 < len2) ? len1 : len2;

// if (n > max_n) {
//     n = max_n + 1; // Incluir el carácter nulo para strings nulos.
// }