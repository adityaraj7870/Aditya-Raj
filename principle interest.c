#include<math.h>// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    float P,R,T,SI,CI;
    printf("enter principal,rate,time");
    scanf("%f%f%f",&P,&R,&T);
    SI=(P*R*T)/100;
    CI=P*pow((1+R/100),T)-P;
    printf("simple interest=%2f \n compound interest=%2f",SI,CI);
    return 0;
}