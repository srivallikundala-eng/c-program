#include<stdio.h>
int main()
{
	int n,rev=0,temp,d;
	printf("enter any value");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	if(rev=temp)
	printf("it is a palindrome");
	else
	printf("it is not a palindrome");
	return 0;
}
