#include<stdio.h>
int main()
{ int a,b,c ;
    printf("enter two numbers/n");
    printf(" a = first number , b = second number");
    scanf(" %d %d " , & a, &b );
    c=a;
    a=b;
    b=c;
    printf(" value of a id %d ",a);
    printf(" value of b is %d" ,b);

    return 0;
}

