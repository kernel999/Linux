#include<stdio.h>
main()
{
	int i,j,arr[4][5];
	printf("enter the elements of matrix:\n",i,j);
	for(i=0;i<4;i++)
		for(j=0;j<5;j++)
			scanf("%d",&arr[i][j]);
	printf("elements entered are: \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	printf("\n");
}
