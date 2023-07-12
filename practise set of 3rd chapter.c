// #include<stdio.h>
// int main()
// {
// int physics,chemistry,maths;
// float total;
// printf("enter the number of physics\n");
// scanf("%d",& physics);
// printf("enter the number of chemistry\n");
// scanf("%d",& chemistry);
// printf("enter the number of maths\n");
// scanf("%d",& maths);
// total =(maths+chemistry+physics)/3;
// if (total >= 40)
// {
//   printf("your child is pass  \n");
// }
// else {
//     printf("your child is fail\n");
// }
// if (physics >=33)
// {
//     printf("your child got sufficient marks in physics\n");
// }
// else{
//     printf("your child is fail because he don't get sufficient marks in physics\n");
// }

// if (chemistry >=33)
// {
//     printf("your child got sufficient marks in chemistry\n");
// }
// else{
//     printf("your child is fail because he don't get sufficient marks in chemistry\n");
// }

// if (maths >=33)
// {
//     printf("your child got sufficient marks in maths\n");
// }
// else{
//     printf("your child is fail because he don't get sufficient marks in maths\n");
// }
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int physics,chemistry,maths;
// float total;
// printf("enter the number of physics\n");
// scanf("%d",& physics);
// printf("enter the number of chemistry\n");
// scanf("%d",& chemistry);
// printf("enter the number of maths\n");
// scanf("%d",& maths);
// total =(maths+chemistry+physics)/3;
// if ((total<40)||physics<33||chemistry<33||maths<33)
// {
//     printf("your total percentage is %f and you are fail\n");
// }
// else{
//     printf("your total percentage is %f and you are pass\n");
// }
// return 0;
// }

#include <stdio.h>
int main()
{
    float tax = 0, income;
    printf("enter the income\n");
    scanf("%f",& income);
    if (income>=250000 && income<=500000)
    {
        printf("tax on your income is %f",tax=tax+0.05*(income-250000));
    }
     if (income>=500000 && income <=1000000)
    {
        printf("tax on your income is %f", tax=tax+0.20*(income-500000));
    }
     if (income>=1000000)
    {
        printf("tax on your income is %f ", tax=tax+0.30*(income));
    }
    return 0;
}