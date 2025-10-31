//
#include<stdio.h>
int main ()
{

    int y=0;

    scanf("%d",&y);

    if (y%4==0&&y%100!=0)
    {
        printf("Leap year");
    }
    else 
    {

       printf("Not a leap year "); 
    }

  return 0;
}