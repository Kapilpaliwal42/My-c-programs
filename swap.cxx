#include<stdio.h>

int main()
{
    int a , b;
    int c;
    scanf("%d %d" ,&a ,&b);
    c = a;
    a = b;
    b = c;
    printf("after swapping: a = %d and b = %d" ,a ,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping: a = %d and b = %d" ,a ,b);
    
    puts("hello world");
    return 0;
}