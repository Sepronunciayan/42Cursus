#include <stdio.h>

int ft_isascii(int c)
{
    unsigned char b;

    b = (unsigned char) c;
    if (c < NULL || c > '~')
    {
        return (0);
    }
    else
    {
        return (1);
    }
}

int main() 
{
  char c = ' ';
  if (ft_isascii(c)) {
    printf("%c is a ascii", c);
  } else {
    printf("%c is not a isascii", c);
  }
  return 0;
}