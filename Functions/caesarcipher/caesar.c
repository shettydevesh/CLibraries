#include<stdio.h>
#include<string.h> 
#include"caesar.h"
int main()
{
    char msg[100];
    int i,n,key=4;
    printf("***Note: The key used for encryption should be the same for decryptiona as well***\n");
    do
    {
         printf("\nChoose to encrypt or decrypt a message:\n1. Encryption\n2. Decryption\n");
         scanf("\n%d",&n);
         switch(n)
         {
            case 1:
            printf("Enter a message to encrypt: ");
            scanf("%s",&msg);
            cencrypt(msg, key);
            break;

            case 2:
            printf("Enter a message to decrypt: ");
            scanf("%s",&msg);
            cdecrypt(msg, key);
            break;

            default:
            printf("Hope you liked our demo!!");
            break;
 
         }
    }
    while(n<=2);
    return 0;
}