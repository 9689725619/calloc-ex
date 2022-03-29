#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *m;
	char name[10];
	strcpy(name,"ashish");
	m=(char*)calloc(20,sizeof(char));
	     if(m==NULL)
	     printf("could not able to allocate memory\n");
	     else
	     strcpy(m,"www.help4code.com");
	     printf("\n name=%s",name);
	     printf("\n%s",m);
	     return 0;
}
