#include<stdio.h>
main()
{
	int i,j,mat1[2][3],mat2[2][3],mat3[2][3];
	printf("enter elements for mat1(2*3) in row/column wise:\n",i,j);
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&mat1[i][j]);
	printf("elements entered for mat1 are:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",mat1[i][j]);
		printf("\n");
	printf("\n");
	}
	printf("enter elements for mat2(2*3) in row/column wise:\n",i,j);
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&mat2[i][j]);
	printf("elements entered for mat2 are:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",mat2[i][j]);
		printf("\n");
	printf("\n");
	}
	printf("addition of two matrices are:\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			mat3[i][j]=mat1[i][j]+mat2[i][j];
//	printf("The resultant matrix is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",mat3[i][j]);
		printf("\n");
	}
}
