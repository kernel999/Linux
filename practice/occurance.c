#include <stdio.h>
 
int main()
{
    int num,digit,cnt;
    int n,rem;
 
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter digit to search: ");
    scanf("%d",&digit);
 
    cnt=0;
    n=num;
 
    while(n>0)
    {
        rem=n%10;
        if(rem==digit)
            cnt++;
        n=n/10;
    }
 
    printf("Total occurrence of digit is: %d\n",cnt);
     
}
