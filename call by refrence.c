#include<stdio.h>
void wrong_swap(int a,int b);
void swap(int *a,int *b);
int main()
{
 int x=3,y=4;
 printf("the valu of x nad y is%dand%d\n",x,y);
//  wrong_swap(x,y);s
swap(&x,&y);
 
 printf("the valu of x nad y is%dand%d\n",x,y);

return 0;
}

void wrong_swap(int a,int b){
    int temp;
    temp=a;;
    a=b;
    b=temp;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;;
    *a=*b;
    *b=temp;

}
