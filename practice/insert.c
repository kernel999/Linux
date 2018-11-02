#include<stdio.h>
#define SIZE 10
main()
{
	int arr[SIZE];
	int i,element;
	printf("enter elements of array in order:");
	for(i=0;i<SIZE-1;i++)
		scanf("%d",&arr[i]);
	printf("enter element to be inserted: ");
	scanf("%d",&element);
	for(i=SIZE-2;element<arr[i]&&i>=0;i--)
		arr[i+1]=arr[i];
	arr[i+1]=element;
	for(i=0;i<SIZE;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
