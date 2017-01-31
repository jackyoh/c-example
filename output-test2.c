#include <stdio.h>

int main(void){
  int n  = 100;
  int i = 0;
  n = -n;
  printf("%d\n", n);
  for(i = 0 ; i <= 129 ; i++){
     printf("%d\n", i + '0');
  }

}
