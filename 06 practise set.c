// #include<stdio.h>
// int main()
// {
// int a;

// printf(" the address of the number is %u\n",&a);
// return 0;
// }




/*
#include<stdio.h>
void printAdd(int a){
    printf(" the address of the variable is %u\n",&a);
}

int main()
{
int i=4;
printf("the value of variable i is %d\n",i);
printAdd(i);
printf("the address of variable i is %u\n",&i);
return 0;
}
*/



/*
#include<stdio.h>
void sumAndAvg(int a,int b,int *sum,float *avg){
*sum =a+b;
 *avg = (float)*sum/2;
}

int main()
{
int i,j,sum;
float avg;
i=3;
j=6;
sumAndAvg(i,j, &sum,&avg);
printf(" the value of sum is %d\n",sum);
printf(" the value of avg is %f \n",avg);

return 0;
}*/


/*
#include<stdio.h>
int main()
{
int i=345;
int *ptr;
int **ptr2;

ptr=&i;
ptr2=&ptr;
printf("the value of i is %d",**ptr2);

return 0;
}*/



