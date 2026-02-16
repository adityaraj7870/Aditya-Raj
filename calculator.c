#include<stdio.h>
int main(){
    float a,b;
    char c;
    printf("enter numbers to calculate :");
    scanf("%f%f",&a,&b);
    printf("enter the operator :");
    scanf(" %c",&c);
    if (c== '+'){
        printf("%f",(a+b));
    }
    else if (c=='-'){
        printf("%f",(a-b));        
    }
    else if (c=='*'){
        printf('%f',(a*b));
    }
    else if (c=='/'){
        printf("%f",(a/b));        
    }
    return 0;    

}