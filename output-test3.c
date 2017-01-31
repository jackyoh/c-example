#include <stdio.h>
#include <string.h>
int main(void){
 char hello[]={'H','E','L','L','O'};
 char world[]={'W','O','R','L','D'};

 strcpy(hello, world);
 int i = 0;
 
 for(i = 0 ; i < strlen(hello) ; i++){
    printf("%c\n", hello[i]);
 }
 //strcpy,strcmp,strcat,strstr,strlen,strrev
}
