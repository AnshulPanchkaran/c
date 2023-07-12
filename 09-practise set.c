#include<stdio.h>
struct vector
{
    int x;
    int y;
    
};

int main()
{
    struct vector v1,v2;
    v1.x=34;
    v1.y=54;
    printf("x dim is %d and y dim is %d\n",v1.x,v1.y);

return 0;
}


//vector program

#include<stdio.h>
struct vector
{
    int x;
    int y;
    
};
struct vector sumvector(struct vector v1, struct vector v2){
        struct vector result;
        result.x=v1.x+v2.x;
        result.y=v2.y+v2.y;
        return result;

    }

int main()
{
    struct vector v1,v2,sum;
    v1.x=34;
    v1.y=54;
    printf("x dim is %d and y dim is %d\n",v1.x,v1.y);


    sum= sumvector(v1,v2);
   v2.x=354;
    v2.y=544;
    printf("x dim is %d and y dim is %d\n",v2.x,v2.y);

    sum= sumvector(v1,v2);
    printf("x dim  of result is %d and y dim is %d\n",sum.x,sum.y);
return 0;
}

// problem 5 and 6

#include<stdio.h>

typedef struct complex{
    int real;
    int complex;
}comp;
void display(comp c){
    printf("the value of real part is %d",c.real);
    printf("the value of imaginary part is %d",c.complex);
}
int main()
{

comp cnums[5];
for (int i = 0; i < 5; i++)
{
    printf("enter the real values for %d num\n",i+1);
    scanf("%d",&cnums[i].real);


    printf("enter the complex values for %d num\n",i+1);
    scanf("%d",&cnums[i].complex);
}

for (int i = 0; i < 5; i++){
    display(cnums[i]);
}
return 0;
}


//problem capable of storing date

#include<stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;

}date;

void display(date d){
printf("the date is :%d/%d/%d\n",d.date,d.month,d.year);
}
int datecmp(date d1,date d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    
     if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
}
int main()
{
date d1={2,11,21};
date d2={4,11,22};
display(d1);
display(d2);

int a =datecmp(d1,d2);
printf("date coparision function return %d",a);
return 0;
}