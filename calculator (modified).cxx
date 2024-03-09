#include<stdio.h>
int main()

{
	float a,b,c;
	int ch;
	do{
	    printf("\n***************************");
	    printf("\nCALCULATOR");
	    printf("\n***************************\n");
	    printf("1. Addition\n");
	    printf("2.Subtraction\n");
	    printf("3.Division\n");
	    printf("4.Multiplication\n");
	    printf("5.Exit \n");
	    printf("***************************\n");
	    printf("\nenter your choice:");
	    scanf("%d",&ch);
	    switch(ch)
	{
	    case 1:
	    printf("\nenter first number:\n");
	    scanf("%f " ,&a);
	    printf("\nenter second number:");
	    scanf("%f" ,&b);
	    c = a + b;
	    printf("%f + %f = %f\n",a,b,c);
	    break;
	    case 2:
	       printf("\nenter first number:\n");
	    scanf("%f " ,&a);
	    printf("\nenter second number:");
	    scanf("%f" ,&b);
	    c = a - b;
	    printf("%f - %f = %f",a,b,c);
	    break;
	    case 3:
	       printf("enter first number:\n");
	    scanf("%f " ,&a);
	    printf("enter second number:");
	    scanf("%f" ,&b);
	    c = a / b;
	    printf("\n%f ÷ %f = %f",a,b,c);
	    break;
	    case 4:
	       printf("enter first number:\n");
	    scanf("%f " ,&a);
	    printf("enter second number:");
	    scanf("%f" ,&b);
	    c=a*b;
	    printf("%f × %f = %f\n",a,b,c);
	    break;
	    default:
	    if(ch!=5)
	    {
	    printf("\nerror:\t invalid input\n");
	    }
	    break;
	    
	}
	}
	while(ch!=5);
	{
	    printf("\nthank you for using calculator");
	}
	
	
	    
return 0;	
}