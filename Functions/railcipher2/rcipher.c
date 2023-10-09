#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"rcipher.h"
#define VAL(PTR) (*PTR)

typedef char* STRING;
typedef char** STRING_REF;

void flush_stdin()
{
	while(fgetc(stdin) != '\n');
}

int main(void)
{
	STRING str;
	int txt_length, key=3 ,n;
    printf("***Note: Before starting with decryption, make sure that the string to be decrpted is wrt the key given***\n");
    do
    {
	printf("\nEnter the length of the text to be encrypted or decrypted: ");
	scanf("%d",&txt_length);
    printf("\nChoose to encrypt or decrypt a string:\n1. Encryption\n2. Decryption\n");
    scanf("\n%d",&n);
    switch(n)
    {
        case 1:
        printf("Input the string you want to encrypt: ");
	    flush_stdin();
	    str = (char*)malloc((txt_length+1)*sizeof(char));
	    fgets(str,txt_length+1,stdin);
        rail_fence_encrypt(&str,key);
	    printf("\nThe encrypted text is: %s\n",str);
        break;

        case 2:
        printf("Input the string you want to decrypt: ");
	    flush_stdin();
	    str = (char*)malloc((txt_length+1)*sizeof(char));
	    fgets(str,txt_length+1,stdin);
        rail_fence_decrypt(&str,key);
	    printf("\nThe decrypted text is: %s\n",str);
        break;

         default:
         printf("Hope you liked our demo!!");
         break;
 
    }
    }
    while(n<=2);
    return 0;
}