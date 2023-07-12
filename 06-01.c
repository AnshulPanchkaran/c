#include<stdio.h>
int main()
{

int i =34;
int *j =&i;
printf("the value is = %d\n",i);
printf("the value is = %d\n",*j);
printf("the address is = %u\n",&i);
printf("the address is = %u\n",j);
return 0;
}