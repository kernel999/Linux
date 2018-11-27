

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i=0,j=0;
    char file1[100];
        FILE *fp;
/*
        fp=fopen("file.txt","r+");

        while((fgets(file1,100,fp))!=NULL)
        {
            i=0,j=0;
            while(file1[i]!='\0')
            {

                if(islower(file1[i]) && (file1[i-1]==' '))
                {
            
                    file1[j++]=toupper(file1[i++]);
                }
                else if(islower(file1[i-1]))
                {
            

                    file1[j++]=toupper(file1[i++]);
                }
                else
                    file1[j++]=file1[i++];
            }
            fputs(file1,fp);
        }
}

*/

    fp=fopen("file.txt","r+");  //opens file in read,write mode
    while((fgets(file1,100,fp))!=NULL)//reads string from file andif not equal to null enters loop
    {
    for(i=0;file1[i]!='\0';i++)
    {
        if(i==0)
        {
        if((file1[i]>='a'&&file1[i]<='z'))
            file1[i]=file1[i]-32;
        continue;
        }
        if(file1[i]==' ')
        {
            i++;
            if((file1[i]>='a'&&file1[i]<='z'))
            file1[i]=file1[i]-32;
        continue;
        }
            
//        if(file1[i]==' ')
//        {
        
//        if((file1[i]>='a'&&file1[i]<='z'))
//            file1[i]=file1[i]+32;
//        continue;
//        }
        else
        {
        if((file1[i]>='A'&&file1[i]<='Z'))
            file1[i]=file1[i]+32;
        continue;
        }
    }                                                                                                                                                        
    fputs(file1,fp);
    }
}
   


