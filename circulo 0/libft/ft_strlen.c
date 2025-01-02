#include <stdio.h>
#include <stdlib.h>

char ft_strlen(char *str){
   int i;
   i = 0;
   while (str[i] != '\0')
   {
    i++;
   }
   return (i);
}

int main() {
  char myStr[20] = "Hello World";
  printf("%zu\n", ft_strlen(myStr));
  printf("%zu\n", sizeof(myStr));
  return 0;
}