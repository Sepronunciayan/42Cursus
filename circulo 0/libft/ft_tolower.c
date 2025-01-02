#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    unsigned char b;
    b = (unsigned char) c;
    if (c <= 'A' || c >= 'Z')
    {
        return (1);
    }
    else if (c >= 'A' || c <= 'Z')
    {
        return (c += 32);
    }
}

int main()
{
    char letter = '*';
    int valor = letter;
    ft_toupper(valor);
    printf("%c", ft_toupper(valor));
}