#include<stdio.h>
#include<math.h>
main()
{
/*
	int n,num,cube,d,sum;
//	printf("enter the number\n",n);
//	scanf("%d\n",&n);
	printf("armstrong numbers are:\n");
	for(num=0;num<=999;num++)
	{
	n=num;
	sum=0;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		cube=d*d*d;
		sum=sum+cube;
	}
	if(num==sum)
		printf("%d\n",num);
	}
}*/
	int i,n,num,cube,d,sum;
	printf("enter a number:");
	scanf("%d",&n);
	printf("armstrong numbers between 1 to %d are:\n",n);
	for(i=0;i<=n;i++)
	{
	num=i;
	sum=0;
	while(num>0)
		{
		d=num%10;
		cube=d*d*d;
		sum=sum+cube;
		num=num/10;
		}
		if(i==sum)
			printf("%d\n",i);

	}

}	
		

