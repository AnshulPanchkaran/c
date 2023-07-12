#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    int z =a*b;

    printf("the value of z is: %d\n", z);
    printf("the value of a+b is: %d\n", a + b);
    printf("the value of a-b is: %d\n", a - b);
    printf("the value of a/b is: %d\n", a / b);
    printf("the value of a*b is: %d\n", a * b);
    return 0;
}