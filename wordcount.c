#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int i=0;
    fp=fopen("file.txt","r");
    if(fp==NULL)
        {
        printf("file not found");
        }
    else
        {
        ch=fgetc(fp);
        while(ch!=EOF)
        {
        if((ch==' '|| ch =='\n'))
        {
	        
            i++;
	        
	}
            ch=fgetc(fp);
            }
	    printf("\nWords in a file are=%d\n",i);
        }
     fclose(fp);
} 
