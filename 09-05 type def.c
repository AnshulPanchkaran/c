#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
}emp;
void show(struct employee emp){
    printf("the code of salary is : %d\n",emp.code);
    printf("the salary  of employee is : %f\n",emp.salary);
    printf("the name of employee is : %s\n",emp.name);
}
int main()
{
    //declaring e1 and ptr 
    emp e1;
  emp *ptr;
  //pointing ptr to e1
  ptr =&e1;
  // set the member values of e1
  (*ptr).code =101;
  (*ptr).salary =12045.36;
  strcpy(ptr->name,"anshul");
  
 show (e1);

    

return 0;
}