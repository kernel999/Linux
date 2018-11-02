#include<stdio.h>
int reverse(int n);
main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	printf("reverse number of %d is %d\n",num,reverse(num));
	if(num==reverse(num))
		printf("no. is palindrome\n");
	else
		printf("no is not palindrome\n");
}
	reverse(int n)
	{
	int rem,rev=0;
	while(n>0)
	{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	}
	return rev;
	}
