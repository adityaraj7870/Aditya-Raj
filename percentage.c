#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g;
    printf("enter the marks of all 5 subject");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    f=a+b+c+d+e+f;
    g=f/5;
    printf("percentage is : %f",g);
    return 0;
}