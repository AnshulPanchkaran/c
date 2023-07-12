#include<stdio.h>
int main()
{
FILE *ptr;
ptr =fopen("sample.txt","r"); //this is used to read  the file only
ptr =fopen("sample.txt","w"); //this is used to write  the file only

return 0;
}

// how to read a file in c program

#include<stdio.h>
int main()
{
FILE *ptr;
    int num,num2;
ptr=fopen("anshul.txt","r");
fscanf(ptr,"%d",& num);
fscanf(ptr,"%d",& num2);


printf("the value of num is %d\n",num);
printf("the value of num2 is %d\n",num2);
return 0;
fclose(ptr);
}

// file open or not which dont exit 

#include<stdio.h>
int main()
{
FILE *ptr;
    int num,num2;
ptr=fopen("anshuml.txt","r");

if (ptr ==NULL)
{
    printf("file dont exits");
}
else{
fscanf(ptr,"%d",& num);
fscanf(ptr,"%d",& num2);


printf("the value of num is %d\n",num);
printf("the value of num2 is %d\n",num2);
return 0;
fclose(ptr);
}
}

//how to write a file in c program

#include<stdio.h>
int main()
{ 
FILE *fptr;
int num =412;
fptr =fopen("generated.txt","w");
fprintf(fptr,"the generated number is %d",num);
fclose(fptr);

return 0;
}


//fputs and fgets uses in c


#include<stdio.h>
int main()
{


FILE *ptr;
ptr = fopen("fget.txt","r");
// char c= fgetc(ptr);                           //fgetc will read the file character by character  
printf("the value of my character is %c\n",fgetc(ptr));
printf("the value of my character is %c\n",fgetc(ptr));
printf("the value of my character is %c\n",fgetc(ptr));
printf("the value of my character is %c\n",fgetc(ptr));
printf("the value of my character is %c\n",fgetc(ptr));
printf("the value of my character is %c\n",fgetc(ptr));
printf("the value of my character is %c\n",fgetc(ptr));
printf("the value of my character is %c\n",fgetc(ptr));
printf("the value of my character is %c\n",fgetc(ptr));
return 0;
}

// now puts

#include<stdio.h>
int main()
{


FILE *ptr;
ptr = fopen("puts.txt","w");

putc('c',ptr);
fclose(ptr);

return 0;
}



// how to read the file
#include<stdio.h>
int main()
{


FILE *ptr;
ptr = fopen("fget.txt","r");
 char c= fgetc(ptr);
 while (c!=EOF)
 {
printf("%c",c);
c= fgetc(ptr);
    
 }
   
return 0;
}