#include<stdio.h>
int main()
{
    int i=0;
    int n;
    printf("enter the number \n");
    scanf("%d", &n);
    do
    {
        printf("the natural number are %d \n", i+1);
        i++;
    } while (i<n);
    return 0;
}