#include <stdio.h>

char ft_isalpha(char c){
    if(c < 'a' && c > 'z' || c < 'A' && c > 'Z')
    {
        return (1);
    }
    else
    {
         return (0);
    }
}

int main() {
  char c = '1';
  if (ft_isalpha(c)) {
    printf("%c is a letter", c);
  } else {
    printf("%c is not a letter", c);
  }
  return 0;
}