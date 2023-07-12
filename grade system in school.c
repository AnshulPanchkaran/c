#include<stdio.h>
int main()
{ 
int A,B,C,D,F,number;
printf("enter the numbers");
scanf("%d",& number);
if (number>=90 && number<=100)
{
    printf("you child had got A grade and he is pass with good marks");
}
else if (number>=80 && number<=90){
    printf("you child got B grade and pass with average marks");
}
else if (number>=70 && number<=80){
    printf("you child got C grade and pass with poor marks");
}
else if (number>=60 && number<=70){
    printf("you child got D grade and pass with  very pood marks");
}
else if (number<=60){
    printf("you child got F grade and he is fail");
}
else{
    printf("Invalid input");
}

return 0;
}