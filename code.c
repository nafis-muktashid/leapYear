#include <stdio.h>

int main()
{
    int x;
    printf("Input the year    :  ");
    scanf("%d" , &x);
    if (x%400==0)
    {
        printf("It's a Leap year. \n");
    }
    else if ((x%4==0)&&(x%100!=0))
    {
        printf("Leap year.    \n");
    }
    else
    {
        printf("Not a leap year.   \n");
    }
    return 0;
    
        
}