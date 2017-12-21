#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
/*a Commentary*/
# define A a
# define B b
# define F() int main(){int fd=open("Grace_kid.c", O_CREAT | O_TRUNC | O_WRONLY);char *a="#include <stdio.h>%c#include <sys/stat.h>%c#include <fcntl.h>%c/*a Commentary*/%c# define A a%c# define B b%c# define F() int main(){int fd=open(%cGrace_kid.c%c, O_CREAT | O_TRUNC | O_WRONLY);char *a=%c%s%c;dprintf(fd,a,10,10,10,10,10,10,34,34,34,a,34,10,10);};%cF();%c";dprintf(fd,a,10,10,10,10,10,10,34,34,34,a,34,10,10);};
F();
