#include<stdio.h>
void display();     //fuction prototype

int main()
{
    int a;
    printf("initilization display function\n");
display();                                              //function body
printf("display function finish its work\n");
return 0;
}
void display(){
    printf("this is display\n");                       //function end 
  }