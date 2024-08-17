#include<stdio.h>
int main()
{
    printf("enter the number");
    int n;
    scanf("%d",n);
    
    int temp,r,c,sum=0;
    temp=n;
    while(n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("armstrong");
    }




}