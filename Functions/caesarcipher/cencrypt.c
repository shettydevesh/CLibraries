#include<stdio.h> 
#include<string.h>
void cencrypt(char msg[],int key)
{
char ch;
int i;
for(i = 0; msg[i] != '\0'; ++i){
ch = msg[i];
if(ch >= 'a' && ch <= 'z'){
ch = ch + key;
if(ch > 'z'){
ch = ch - 'z' + 'a' - 1;
}
msg[i] = ch;
}
else if(ch >= 'A' && ch <= 'Z'){
ch = ch + key;
if(ch > 'Z'){
ch = ch - 'Z' + 'A' - 1;
}
msg[i] = ch;
}
}
printf("\nEncrypted message: %s", msg);
}