#include<stdio.h>
int main()
{

    printf("enter any number");
    int n;
    scanf("%d",&n);
    int i;
    for( i=2;i<n;i++)
    {
        n%i;       
    if(n%i==0)
        {printf("THe number is not a prime number");
        break;}
    
        else if(i==n){
            printf("it is a prime number."); }

    }



    return 0;

}