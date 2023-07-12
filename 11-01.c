
                                            // maloce function

#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
// printf("the size of int in my pc is %d\n",sizeof(int)); // size of int in your memory 
ptr = (int *)malloc(6 * sizeof (int));
for (int i = 0; i < 6; i++)
{
    printf("enter value of %d element ",i);
    scanf("%d",&ptr[i]);
}
for (int i = 0; i < 6; i++){
    printf("the value of %d element is %d\n",i,ptr[i]);
}

return 0;
}

                                            //caloce functtion

#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
// printf("the size of int in my pc is %d\n",sizeof(int)); // size of int in your memory 
ptr = (int *)calloc(6 , sizeof (int));
for (int i = 0; i < 6; i++)
{
    printf("enter value of %d element ",i);
    scanf("%d",&ptr[i]);
}
for (int i = 0; i < 6; i++){
    printf("the value of %d element is %d\n",i,ptr[i]);
}

return 0;
}

                                                //calloc quick quiz


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


                                        //free function

#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,*ptr2;
// printf("the size of int in my pc is %d\n",sizeof(int)); // size of int in your memory 
ptr = (int *)malloc(6 * sizeof (int));
for (int i = 0; i < 600; i++)
{
    ptr2 = (int *)malloc(600 * sizeof (int));
    printf("enter value of %d element ",i);
    scanf("%d",&ptr[i]);
}
for (int i = 0; i < 6; i++){
    printf("the value of %d element is %d\n",i,ptr[i]);
}

return 0;
}