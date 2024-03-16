#include<stdio.h>
#include<string.h>
void calc(void);
int main()
{
    int i=0,j=0;
    char p[20]={"0"};
    do{
        if(i<=5 || j==0)
        {
    printf("\nenter password to unlock calculator:");
    fgets(p,sizeof(p),stdin);
    p[strcspn(p,"\n")]='\0';
        }
    
    if(strcmp(p,"kapil paliwal")==0)
  {
        calc();
        j++;
        break;
  }
  else {
    printf("ERROR:incorrect password");
    i++;
  }
    }
    while(i!=5);
    return 0;
}
void calc(void)
{
    float n1,n2;
                printf("\nEnter first number: ");
            scanf("%f", &n1);
            printf("Enter second number: ");
            scanf("%f", &n2);

            printf("\nn1 + n2 = %f", n1 + n2);
            printf("\nn1 - n2 = %f", n1 - n2);
            printf("\nn1 * n2 = %f", n1 * n2);
            printf("\nn1 / n2 = %f", n1 / n2);
            printf("\nn1 / n2 * 100 = %f", (n1 / n2) * 100);
            
}