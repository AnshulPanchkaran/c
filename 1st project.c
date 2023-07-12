#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;
    printf("the number is %d",number);
    do
    {
        printf("\n");
        printf("guess the number between 1-100\n");
        scanf("%d",& guess);
        if (guess<number)
        {
            printf("greater number please!\n");
        }
        else if (guess>number)
        {
            printf("lower number please !\n");
        }
        else{
            printf("you guess it in %d attempts\n",nguess);

        }
        nguess++;
    }
        
     while(guess!=number);


return 0;
}