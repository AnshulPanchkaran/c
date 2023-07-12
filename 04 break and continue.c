// #include<stdio.h>
// int main()
// {
//     int i=0;

// do{
//     printf("the numbers are %d \n",i);
//     if (i==4)
//     {
//         break;
//     }
    
//     i++;


// }while(i<10);
// return 0;
// }
                                              //continue
#include<stdio.h>
int main()
{
int skip =5,i=0;
while(i<10){
    i++;
    if (i!=skip)
    {
        continue;
    }
    else{
        printf(" %d\n",i);
    }
    
}
return 0;
}                                              