#include<stdio.h>
//#define SIZE 10
main()
{
	int arr[10];
	int n,start,end,mid,i,element;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter elements of array list:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("enter an element to be searched:");
	scanf("%d",&element);
	start=0;
	end=n-1;
	mid=(start+end)/2;
	while(start<=end)
	{
		
		if(element>arr[mid])
			start=mid+1;
			
		else if(element==arr[mid])
			printf("%d found at position %d\n",element,mid+1);
		
		else
			end=mid-1;
		mid=(start+end)/2;
			
	}
	if(start>end)
		printf("%d element not found\n",element);
}
