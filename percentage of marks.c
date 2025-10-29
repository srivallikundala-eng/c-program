#include<stdio.h>
int main()
{
	int k,s,v,total,per;
	printf("enter k,s,v values");
	scanf("%d%d%d",&k,&s,&v);
	total=k+s+v;
	per=total/3;
	if(k>40&&s>40&&v>40)
	{
		if (per>=90)
		printf("a grade");
		else if(per>=70)
		printf("b grade");
		else if(per>=50)
		printf("c grade");
		else if(per>=40)
		printf("d grade;")
	}
	else
	{
	printf("failed");
    }
	return 0;
}
