// #include<stdio.h>

// float   average (int a, int b ,int c);
// int main()
// {
//     int a,b,c;
// printf(" enter the value of a,b,c\n");
// scanf("%d%d%d",&a,&b,&c);
// printf(" the value of average of a,b,c is %f",average(a,b,c));

// return 0;
// }
// float   average (int a, int b ,int c) {
//     float result;
//     result =(float)(a+b+c)/3;
//     return result;

// }





// #include<stdio.h>
// float  force ( float mass);

// int main()
// {
//     float mass;
//     printf(" enter the mass of \n");
//     scanf("%f",& mass);
//   printf(" the value of force is %.2f", force(mass));

// return 0;
// }
// float force (float mass){
//     float result;
//     result =mass *9.8;
//     return result;
// }





#include<stdio.h>
void printpattern(int n);

int main()
{
  int n;
printf(" enter the number of stars you want to print\n");
scanf(" %d",&n);
printpattern(n);
return 0;
}
void printpattern(int n ){
if (n==1)
{
  printf("*\n");
  return;
}

printpattern(n-1);
for(int i=0;i<(2*n-1);i++)
{
  printf("*");
}

printf("\n");
}