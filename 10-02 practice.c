
//program to read 3 inters

#include<stdio.h>
int main()
{
FILE *ptr;
int num,num1,num2;
ptr=fopen("anshul.txt","r");
fscanf(ptr ,"%d",& num);
fscanf(ptr ,"%d",& num1);
fscanf(ptr ,"%d",& num2);


printf("the value of number is %d\n",num);
printf("the value of number is %d\n",num1);
printf("the value of number is %d\n",num2);
return 0;
}

// mutiplication table 


#include<stdio.h>
int main()
{
FILE *ptr;
int m;
printf("which multiplication table you want\n");
scanf("%d", &m);
ptr = fopen("table.txt","w");
for (int i = 0; i < 10; i++)
{
    fprintf( ptr, " %d X %d =%d \n",m,i+1,m*(i+1));
}
fclose(ptr);

return 0;
}

//copy content twice 

#include<stdio.h>
int main()
{
FILE *ptr1;
FILE *ptr2;
ptr1 = fopen("generated.txt","r");
ptr2= fopen("generated1.txt","w");
char c= fgetc(ptr1);
while (c!=EOF)
{
    fputc(c,ptr2);
    fputc(c,ptr2);
    c= fgetc(ptr1);
}

fclose(ptr1);
fclose(ptr2);

return 0;
}
