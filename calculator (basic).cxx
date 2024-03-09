#include<stdio.h>
int main()
{
 
 
 float n1,n2;
 

    printf("*********calculator********** ");
    printf("\n enter first number:");
    scanf("%f" ,&n1);
    printf("\n enter secund number:");
    scanf("%f" ,&n2);
    
    printf("\n n1 + n2 = %.2f" ,n1+n2);
    printf("\n n1 - n2 = %f" ,n1-n2);
    printf("\n n1 * n2 = %f" ,n1*n2);
    printf("\n n1 /  n2 = %f" ,n1/n2);
    printf("\n n1 / n2 * 100 = %f" ,n1/n2*100);
 
 return 0;
    
}
