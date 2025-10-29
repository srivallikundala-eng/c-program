#include<stdio.h>
int main()
{
	float p,t,R,si;
	printf("enter p,t,R values");
	scanf("%f%f%f",&p,&t,&R);
	si=(p*t*R)/100;
	printf("simple interest=%f",si);
	return 0;
}
