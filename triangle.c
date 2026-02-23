#include<stdio.h>
int main(){
    int a,c,d;
    printf("enter sides of triangle");
    scanf("%d%d%d",&a,&c,&d);
    if ((a+c)>d || (c+d)>a || (a+d)>c){
         printf("yes it can form a triangle\n");
    }
    if (a== && c == d){
        printf("it is a equilateral triangle");
    }
    else if (a!=c && c!=d){
        printf("it is a scalar triangle");
    }
    else {
        printf("it is a isosceles");
    }
    return 0;
}



