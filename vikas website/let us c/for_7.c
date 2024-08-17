#include<stdio.h>
int main()
{

    printf("enter a number n :");
    int n;
    scanf("%d",&n);

    for(int i=10;i>=1;i--)
    {   

        printf("%d\t",n*i);
    }




    return 0;

}