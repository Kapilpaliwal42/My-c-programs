#include<stdio.h>
int main()
{
    int i=0,j;
    int x=0,digit;
    printf("enter a number to reverse:");
    scanf("%d",&j);
    while(j!=0)
    {
         
        digit=j%10;
         x=x*10+digit;
        j=j/10;
       
       
        
        
    }
    printf("/n\t%d",x);
    return 0;
}