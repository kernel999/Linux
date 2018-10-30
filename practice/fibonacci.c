#include<stdio.h>
main()
{
	int n,num1=0,num2=1,temp;
	printf("enter a number");
	scanf("%d",&n);
	if(n==num1 || n==num2)
	{
	printf("fibonacci number",n);
	}
	while(num2<=n){
	  temp=num2;
	  num2=num1+num2;
	  num1=temp;
	  if(num2==n)
	  printf("%d is a fibonacci number\n",n);
	}
}
