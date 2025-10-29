#include<stdio.h>
int main()
{
	int bs,da,hra;
	float gs;
	printf("enter bs value");
	scanf("%i",&bs);
	if(bs>10000)
	{
		da=10%bs;
		hra=15%bs;
	}
	else
	{
		da=15%bs;
		hra=20%bs;
	}
	gs=bs+da+hra;
	printf("gross_salary=%f",gs);
	return 0;
}
