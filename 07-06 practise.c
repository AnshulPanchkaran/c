#include<stdio.h>
int main()
{
 int arr[10];                                             //question 1 array of 10 numbers 
 int *ptr = &arr[0];
 ptr =ptr+2;
 if (ptr=&arr[2])
 {
    printf("these points to the same location\n");
 }
 else{
    printf("these do not points to the same address\n");
 }
 
return 0;
}


//multipliaction table

#include<stdio.h>
int main()
{
int arr[10],n;
printf("enter the number you want to find multiplication table\n");
scanf("%d",&n);
for (int i = 0; i < 10; i++)
{
    arr[i]=n*(i+1);

}
for (int i = 0; i < 10; i++)
{
   printf("%d*%d=%d\n",n,i+1,arr[i]);
    
}

return 0;
}


// reverse the array

#include<stdio.h>
void reverse(int *arr,int n){
    int temp;


    for (int i = 0; i < n/2; i++)

    {
        temp =arr[i];

        arr[i],arr[n-i-1];
        arr[n-i-1]=temp;
    }
    
}
int main()
{
int arr[]={1,2,3,4,5,6,7};
reverse(arr,7);
 for (int i = 0; i < 7; i++){
    printf("the value of %d element is : %d\n",i,arr[i]);
 }
return 0;
}





//
#include<stdio.h>
void printTable(int *mulTable,int num,int n){
printf(" the multiplication table of %d is :\n",num);
for (int i = 0 ; i < n; i++)
{
   mulTable[i]=num*(i+1);
}
for (int i = 0; i < n; i++)
{
   printf("%d*%d=%d\n",num,i+1,mulTable[i]);
}
printf("*********************************************\n");
}

int main()
{
int mulTable[3][10];

printTable(mulTable[0],2,10);
printTable(mulTable[1],7,10);
printTable(mulTable[2],9,10);
return 0;
}



#include<stdio.h>
int main()
{
int arr[2][3][4];
for (int i = 0; i < 2; i++)
for (int j = 0; j < 3; j++)
for (int k = 0; k < 4; k++)
printf("the address of arr[%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);


return 0;
}