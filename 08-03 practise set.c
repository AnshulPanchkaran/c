#include<stdio.h>
#include<string.h>

int main()
{
char st1[34];

char st2[34];
char c;
int i=0;
printf("enter the value of first string\n");

scanf("%s",st1);

printf("enter the value of 2nd string character by character\n");
while (c!='\n')
{
    fflush(stdin);
    scanf("%c",&c);

    st2[i] =c;
    i++;
}
st2[i-1]='\0';
printf("the value of st1 is %s",st1);
printf("the value of st2 is %s",st2);
printf("strcmp for these string return %d",strcmp(st1,st2));

return 0;
}

//write your implimentation of strlin

#include<stdio.h>
int strlen(char *st){
    char *ptr = st;
    int len =0;
    while (*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
char st[]="anshul";
int l=strlen(st);
printf("the length of this string is %d",l);
return 0;
}

// problem 4


#include<stdio.h>
void slice(char *st,int m,int n){
    int i=0;
    while ((m+i)<n)
    {
        st[i]=st[i+m];
        i++;
    }
 st[i]='\0';   
}
int main()
{
char st[]="anshul";
slice(st,1,4);
printf("%s",st);

return 0;
}


//problem 6 to encrypt and decrypt string

#include<stdio.h>
void encrypt(char *c){
    char *ptr=c;
    while (*ptr!='0')
    {
        *ptr=*ptr+1;
        ptr++;
    }
    
}
int main()
{
char c[]="anshul";
encrypt(c);
printf("encrypt string is %s",c);
return 0;
}

//decrypt
#include<stdio.h>
void decrypt(char *c){
    char *ptr=c;
    while (*ptr!='0')
    {
        *ptr=*ptr-1;
        ptr++;
    }
    
}
int main()
{
char c[]="botivm";
decrypt(c);
printf("decrypt string is %s",c);
return 0;
}

//occurance of character

#include<stdio.h>
int occurance(char st[],char c){
    char *ptr=st;
    int count =0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            count++;
        }
            ptr++;
        
    }
    return count;
}
int main()
{
char st[]="anshul";
int count = occurance(st,'f');
printf("occurance =%d",count);
return 0;
}