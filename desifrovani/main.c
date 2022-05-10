//program, který dešifruje text pomocí klíče 
#include<stdio.h>

 
int main()
{
char slovo[100], ch;
int i, klic;
printf("Zadej slovo, které chceš dešifrovat: ");
gets(slovo);
printf("Zadej klíč: ");
scanf("%d", &klic);
for(i = 0; slovo[i] != '\0'; ++i){
ch = slovo[i];
if(ch >= 'a' && ch <= 'z'){
ch = ch - klic;
if(ch < 'a'){
ch = ch + 'z' - 'a' + 1;
}
slovo[i] = ch;
}
else if(ch >= 'A' && ch <= 'Z'){
ch = ch - klic;
if(ch < 'A'){
ch = ch + 'Z' - 'A' + 1;
}
slovo[i] = ch;
}
}
printf("Dešifrované slovo:  %s", slovo);
return 0;
}
