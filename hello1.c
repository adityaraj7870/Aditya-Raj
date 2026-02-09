#include <stdio.h>
int main() {
    float a,b,c;
    int input;
    scanf("%d",&input);// Write C code here
    printf("enter the number a and b");
    scanf("%f%f",&a,&b);
    switch(input){
        case1:c=a+b;
        printf("sum=%f,c");
        break;
        case2:c=a-b;
        printf("subtract=%f,c");
        break;
        case3:c=a*b;
        printf("multiply=%f,c");
        break;
        case4:c=a/b;
        printf("divide=%f,c");
        break;
        default:
        printf("false");
    }
    return 0;
}
    