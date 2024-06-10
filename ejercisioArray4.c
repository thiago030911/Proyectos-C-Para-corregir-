
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a=0;
    int b=0,c=1;
    int vec[10]={2,5,8,4,7,3,2,5,9,4};
    int vec1 [10];
    for(int i=0;i<10;i++)
    {
        if(a==0)
        {
            vec1[i]=vec[i];
            a=a+1;

        }
        for(int j=0;j<10;j++)
        {

            if(vec1[i]!=vec[j])
                {
                    b=b+1;
                    if(b==10)
                    {
                        vec1[i]=vec[i];
                        c=c+1;
                    }
                }

        }

    }
    for(int i=0;i<4;i++)
    {
        printf("%d",vec1[i]);

    }


    return 0;
}
