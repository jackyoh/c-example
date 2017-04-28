#include <string.h>
#include <openssl/md5.h>
#include <stdio.h>

int main(void)
{
    unsigned char digest[MD5_DIGEST_LENGTH];
    char string[] = "123456";

    MD5((unsigned char*)&string, strlen(string), (unsigned char*)&digest);

    char mdString[33];
    int i;
    for(i = 0; i < 16; i++){
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }
    printf("md5 digest: %s\n", mdString);

    return 0;
}
//g++ -lcrypto md5.c -o md5.o
