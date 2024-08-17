#include<stdio.h>
int main()
{
    //  int sum=0;
    // for(int i=5;i<=50;i++)
    // {
       
    //     sum=sum+i;
    // }

    int a=5;
    int sum=0;
    // while(a<=50)
    // {
    //     sum=sum+a;
    //     a++;
    // }

    do{
        sum=sum+a;
        a++;
    }while(a<=50);
    printf("%d",sum);
    return 0;
}