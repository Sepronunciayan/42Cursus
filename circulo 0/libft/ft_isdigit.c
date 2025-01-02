#include <stdio.h>
#include <stdlib.h>
/* si c esta por fuera del rango de numero retorna 0 y se ejecuta correctamente 
de lo contrario retorna 1 que indica error.*/
char ft_isdigit(char c){
    if(c < '0' && c > '9')
    {
        return (0);
    }
    else
    {
         return (1);
    }
}

int main() {
  char c = '1';
  if (ft_isdigit(c)) {
    printf("%c is a digit", c);
  } else {
    printf("%c is not a digit", c);
  }
  return 0;
}