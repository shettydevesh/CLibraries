#include<stdio.h>
#include<string.h>
#include"railcipher.h" 
int main(){
    char msg[50],enMsg[50];
    int key=3,n;
    printf("***Note: The key used for encryption should be the same for decryptiona as well***\n");
    do
    {
         printf("\nChoose to encrypt or decrypt a string:\n1. Encryption\n2. Decryption\n");
         scanf("\n%d",&n);
         switch(n)
         {
            case 1:
            printf("\nEnter the string to be encrypted: ");
            scanf("%s",&msg);
            encryptMsg(msg, key);
            break;

            case 2:
            printf("\nEnter the string to be decrypted: ");
            scanf("%s",&enMsg);
            decryptMsg(enMsg, key);
            break;

            default:
            printf("Hope you liked our demo!!");
            break;
 
         }
    }
    while(n<=2);
    return 0;
}