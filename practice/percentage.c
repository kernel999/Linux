#include<stdio.h>
main()
{
	int m1,m2,m3,m4,m5;
	int sum,total=500,percentage;
	printf("enter marks for subject1",m1);
	scanf("%d",&m1);
	printf("enter marks for subject2",m2);
        scanf("%d",&m2);
	printf("enter marks for subject3",m3);
        scanf("%d",&m3);
	printf("enter marks for subject4",m4);
        scanf("%d",&m4);
	printf("enter marks for subject5",m5);
        scanf("%d",&m5);
	sum = m1+m2+m3+m4+m5;
	percentage=((sum)*100)/total;
	printf("percentage is %d\n",percentage);
}
