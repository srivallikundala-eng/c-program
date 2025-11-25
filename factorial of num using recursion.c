#include<stdio.h>
long int fact(long int);
int main()
{
	long int n,f;
	printf("enter any value");
	scanf("%ld",&n);
	f=fact(n);
	printf("factorial=%ld",f);
	return 0;
}
long int fact(long int n)
{
	if(n==0)
	return 0;
	else
	return(n*fact(n-1));
}
