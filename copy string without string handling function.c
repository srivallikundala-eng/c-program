#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int i;
	printf("enter string1,string2 names");
	scanf("%s%s",&s1,&s2);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	return 0;
}

