#include <stdio.h>

int main (){
  int x = 1;

  while (x * 2 < 2010) {
    x = x * 2;
    printf("%4d\n", x);
  }
}
