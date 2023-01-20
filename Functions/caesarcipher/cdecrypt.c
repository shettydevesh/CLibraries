#include<stdio.h>
#include<string.h> 
void cdecrypt(char msg[],int key)
{
char ch;
int i;
for(i = 0; msg[i] != '\0'; ++i){
ch = msg[i];
if(ch >= 'a' && ch <= 'z'){
ch = ch - key;
if(ch < 'a'){
ch = ch + 'z' - 'a' + 1;
}
msg[i] = ch;
}
else if(ch >= 'A' && ch <= 'Z'){
ch = ch - key;
if(ch < 'A'){
ch = ch + 'Z' - 'A' + 1;
}
msg[i] = ch;
}
}
printf("\nDecrypted message: %s", msg);
}