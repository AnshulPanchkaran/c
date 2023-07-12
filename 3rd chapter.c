
// program to check the number is even or odd

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("enter the number\n");
//     scanf("%d", &a);
//     if (a % 2 == 0)
//     {
//         printf("the number is even %d\n", a);
//     }
//     else
//     {
//         printf("the number is odd");
//     }
//     return 0;
// }

//program for licence apply

#include <stdio.h>
int main()
{
    int age;
    printf("enter the age\n");
    scanf("%d", &age);

    if (age >= 18 && age <= 90)
    {
        printf("you can drive and apply for licence %d", age);
    }

    else
    {
        printf("you can not drive ");
    }

    return 0;
}