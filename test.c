#include <stdio.h>
#include <string.h>
int main(){
	char  a[]="heqwe";
	int b=5;
	int *p=&b;
	char m[]="wwwq";
	char n[]="wwwq";
	printf("%d\n",sizeof(a));
	printf("%d\n",strlen(a));
	printf("%d\n",*p);
	printf("%p\n",m);
	printf("%p\n",n);
		return 0;
} 
