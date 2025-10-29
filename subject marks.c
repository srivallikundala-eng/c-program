#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,sum;
	float average;
	printf("enter s1,s2,s3,s4,s5 values");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	printf("sum=%d",sum);
	average=sum/5;
	printf("average=%d",average);
	return 0;
}

