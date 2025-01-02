#include <stdio.h>
#include <stdlib.h>

char ft_isalnum(char c){
    if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int main() {
  char c = '*';
  if (ft_isalnum(c)) {
    printf("%c is alphanumeric", c);
  } else {
    printf("%c is not alphanumeric", c);
  }
  return 0;
}