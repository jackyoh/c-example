#include <stdio.h>

void convert(int n, int i){
  int j;
  if(n < 0){
     printf("-");
     n = -n;
  }
  j = n / i;
  if(j != 0)convert(j, i);
  printf("%c",(n % i) + '0');
}

int main(void){
  int n = 0,i;
  scanf("%d", &n);
  for(i = 2 ; i <= 8 ; i++){
    convert(n, i);
    printf("\n");
  }
}
