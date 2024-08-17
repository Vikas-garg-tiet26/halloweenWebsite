#include<stdio.h>
int main()
{
    for(int n=5;n<=50;n++)
    {
        if(n%2==0)
        {
            continue;
        }
        printf("%d",n);
    }




    return 0;
}