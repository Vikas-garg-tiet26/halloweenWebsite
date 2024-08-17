#include<stdio.h>

void rec(int l ,int b);
void square(int sq);
float circle(float cir);

int main()
{   
    int l,b;
    printf("enter the values of length and breath of rectangle \n");
    scanf("%d %d",&l,&b);
    rec(l,b);

    int n;
    printf("enter the values of side of sqaure \n");
    scanf("%d",&n);
    square(n);
    
    float r;
    printf("enter the value of radius of circle \n");
    scanf("%f",&r);
    printf("the area of circle is :%f\n",circle(r));
    
    
}

void rec(int l ,int b)
{
    printf("area of revtangle is: %d \n ",2*(l+b));
}

void square(int sq)
{
    printf("area of square is: %d \n",(sq*sq));
}

float circle(float cir)
{
    return (cir*cir*3.14);
}
