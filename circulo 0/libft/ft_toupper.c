#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    unsigned char b;
    b = (unsigned char) c;
    if (c <= 'a' || c >= 'z')
    {
        return (1);
    }
    else if (c >= 'a' || c <= 'z')
    {
        c = c - 32;
    }
    printf("%c", c);
}

int main()
{
    char letter = 'a';
    int valor = letter;
    ft_toupper(valor);
}