#include<stdio.h>
main()
{
	long num;
	int dig,sum;
	printf("enter a number:");
	scanf("%ld",&num);
	printf("%ld->",num);
	do
	{
		for(sum=0;num!=0;num/=10)
		{
			dig=num%10;
			sum=sum+dig;
		}
		printf("%d\t",sum);
		num=sum;
	}while(num=num/10!=0);
	printf("\n");
}
