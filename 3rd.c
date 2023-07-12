#include<stdio.h>
int main()
{
    int first,second,add,subtract,multiply;
    float divide;
    printf("enter two integers\n");
    scanf("%d%d",&first,&second);
    add=first+second;
    subtract=first-second;
    multiply=first*second;
    divide=first/(float)second;
    printf("sum=%d\n",add);
    printf("diffrence=%d\n",multiply);
    printf("divide=%2f\n",divide);
    return 0;
}