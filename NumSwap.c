#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers :\n");
    scanf("%d\n%d",&x,&y);
    printf("Before swapping :\n");
    printf("A = %d\n",x);
    printf("B = %d\n",y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After Swapping :\n");
    printf("A = %d\n",x);
    printf("B = %d",y);
    return 0;
}
