#include<stdio.h>

void indian();

void french();

int main()
{   
    char F,I,num;
    printf("IF You are Indian enter 'I' and if you are French enter 'F' \n");
    scanf("%c",&num);

        // USING SWITCH CASE
    switch(num)
    {
        case'I':indian();
        break;
        case'F':french();
        break;
    }

        // USING IF ELSE
    // if(num=='I')
    // {
    //     indian();
    // }

    // else if (num=='F')
    // {
    //     french();
    // }

    // else
    // {
    //     printf("enter another");
    // }

    return 0;

}

void indian()
{
    printf("namaste bhau ji\n");
}

void french()
{
    printf("bonjur\n");
}