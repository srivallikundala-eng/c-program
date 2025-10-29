#include<stdio.h>
int main()
{
	int date,month,year,sum,lucky;
	printf("enter your dd/mm/yyyy");
	scanf("%d%d%d",&date,&month,&year);
	sum=date+month+year;
	lucky=sum%9;
	printf("your lucky numberis=%d",lucky);
	return 0;
}
