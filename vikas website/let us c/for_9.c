#include<stdio.h>
int main()
{
    // for(int i=1;i<=5;i++)
    // {
    //     for(int n=1;n<=4;n++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    int i=1;
    while(i<=5)
    {
        int j=1;
        while(j<=4)
        {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }



    return 0;
}