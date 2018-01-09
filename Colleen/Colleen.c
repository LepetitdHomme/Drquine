//Colleen.c
#include<stdio.h>
void notmain(char*a){printf(a,10,10,10,34,a,34,10);}
int main(){/*main function*/char*a="//Colleen.c%c#include<stdio.h>%cvoid notmain(char*a){printf(a,10,10,10,34,a,34,10);}%cint main(){/*main function*/char*a=%c%s%c;notmain(a);}%c";notmain(a);}
