
#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
int n;
printf("enter the interger you want to enter\n");
scanf("%d",&n);
ptr = (int *)calloc(n , sizeof (int));
for (int i = 0; i < n; i++)
{
    printf("enter value of %d element ",i);
    scanf("%d",&ptr[i]);
}
for (int i = 0; i < n; i++){
    printf("the value of %d element is %d\n",i,ptr[i]);
}

return 0;
}
