#include<stdio.h>
int main()
{
char str[]="anshul";
char *ptr=str;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
}
return 0;
}

// connvinent way to print
#include<stdio.h>
int main()
.{
char *ptr="anshul";
printf("%s",ptr);

return 0;
}


//how to take input from scanf in string

#include<stdio.h>
int main()
{
char s[34];
printf("enter your name");
scanf("%s",s);
printf("your name is %s",s);
return 0;
}

//use of gets and puts
//gets(use to provide space between two string)
#include<stdio.h>
int main()
{
char s[34];
printf("enter your name");
gets(s);
printf("your name is %s",s);
return 0;
}

//use of puts(use to set the cursier in next line )
#include<stdio.h>
int main()
{
char s[34];
printf("enter your name");
gets(s);
puts(s);
return 0;
}

//diffrence between 2 init method
#include<stdio.h>
int main()
{
    char *ptr = "anshul bro";
// char ptr[]="anshul bro ";
ptr="shubham bhai";
printf("%s",ptr);
return 0;
}