#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
int i = 5;
int main(){char path[300];char s[20];FILE *txt;char *a="#include <stdlib.h>%c#include <stdio.h>%c#include <fcntl.h>%cint i = %d;%cint main(){char path[300];char s[20];FILE *txt;char *a=%c%s%c;sprintf(path, %cSully_%%d.c%c, i);if (open(path, O_RDONLY) >= 0){i--;}if (i < 0)exit(0);sprintf(s,%cSully_%%d.c%c, i);txt=fopen(s,%cw+%c); fprintf(txt, a, 10, 10, 10, i, 10, 34, a, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 10);fclose(txt);sprintf(path,%cgcc -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d%c, i, i);system(path); sprintf(path, %c./Sully_%%d%c, i);system(path);}%c";sprintf(path, "Sully_%d.c", i);if (open(path, O_RDONLY) >= 0){i--;}if (i < 0)exit(0);sprintf(s,"Sully_%d.c", i);txt=fopen(s,"w+"); fprintf(txt, a, 10, 10, 10, i, 10, 34, a, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 10);fclose(txt);sprintf(path,"gcc -Wall -Wextra -Werror Sully_%d.c -o Sully_%d", i, i);system(path); sprintf(path, "./Sully_%d", i);system(path);}