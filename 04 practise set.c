// #include<stdio.h>
// int main(){
//     int x;
//     printf("enter the number\n");
//     scanf("%d",&x); 
    
//  for ( int i = 0; i < 11 ;i++)
//  {
//     printf("x * %d=%d\n",i,x*i);
//  }
 

    



// return 0;
// }





// #include<stdio.h>
// int main()
// {
// int a,i;
// printf("enter the number");
// scanf("%d",&a);
// for(i=0;i<=8;i++)
// {
//    printf("8*%d=%d",i,i*8);
// }
// return 0;
// }



#include<stdio.h>
int main()
{
int a,b=1,i=0;
printf("enter the number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
   b*=i;
}
printf("the factorial is %d is %d",a,b);
return 0;
}