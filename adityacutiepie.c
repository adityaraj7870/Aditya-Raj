#include <stdio.h>
int add();
int main()
{
    printf("%d",add());
    return 0;
    
}
    int add()
{
    int a,b;
    printf("enter");
    scanf("%d%d",&a,&b);
    return (a+b);
}