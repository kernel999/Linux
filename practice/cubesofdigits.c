#include<stdio.h>
main()
{
	int a,cube,sum=0,rem;
	printf("enter a number:");
	scanf("%d",&a);
	while(a>0)
	{
	rem=a%10;
	cube=rem*rem*rem;
	sum=sum+cube;
	a=a/10;
	}
	printf("cube sum of digits is:%d\n",sum);
}
/*
    int num, temp, digit, sum = 0;
    printf("Enter the number \n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
    printf("Given number = %d\n", temp);
    printf("Sum of the digits %d = %d\n", temp, sum);

}*/
