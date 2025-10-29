#include<stdio.h>
int main()
{
	int a,b,c;
	char choice;
	printf("enter a,b values::");
	scanf("%d%d",&a,&b);
	printf("enter your choice +add, -sub, *mul, /div::");
	scanf(" %c",&choice);
	switch(choice)
	{
	case  '+':c=a+b;
	          printf("add=%d",c);
	          break;
	 case  '-':c=a-b; 
	          printf("sub=%d",c);
	          break;
	 case   '*':c=a*b;
	          printf("mul=%d",c);
	          break;
	 case   '/':c=a/b;
  	          printf("div=%d",c);
  	          break;
	 default:printf("invalid choice");
	 }
	 return 0;
}
	

