#include<stdio.h>
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    if (a>0){
        printf("%d is a positive number",a);
    }
    else if (a<0){
        printf("%d is a negative",a);
    }
    else{
        printf("%d is zero",a);
    }
    return 0;
}