#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter two numbers to swap: ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d and %d",a,b);
    return 0;
}