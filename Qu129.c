//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    int n,s=0,c=0;
    float avg;

    fp = fopen("numbers.txt","r");
    if(fp==NULL)
    {
        printf("Error opening file");
        return 1;
    }

    while(fscanf(fp,"%d",&n)==1)
    {
        s+=n;
        c++;
    }

    fclose(fp);

    if(c>0)
        avg = (float)s/c;
    else
        avg = 0;

    printf("Sum = %d\n",s);
    printf("Average = %.2f",avg);

    return 0;
}
