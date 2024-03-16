#include<stdio.h>
#include<string.h>

int main() {
    float n1, n2;
    int i = 0,j=0;
    char pswrd[10] = {0};
    
do {
    if(j==0&&i<=5)
    {
    printf("\nEnter password to unlock calculator (only 5 attempts):  ");
    printf("or enter 0 to exit program");
    scanf("%s", pswrd);
    }
    i++;

   //do {
        if (strcmp(pswrd, "12345") == 0) {
            printf("\nKapil paliwal ***calculator*** ");
;            printf("\nEnter first number: ");
            scanf("%f", &n1);
            printf("Enter second number: ");
            scanf("%f", &n2);

            printf("\nn1 + n2 = %f", n1 + n2);
            printf("\nn1 - n2 = %f", n1 - n2);
            printf("\nn1 * n2 = %f", n1 * n2);
            printf("\nn1 / n2 = %f", n1 / n2);
            printf("\nn1 / n2 * 100 = %f", (n1 / n2) * 100);
            j++;
        } 
        else if (strcmp(pswrd,"12345")==0)
        {
            printf("\tTHANK YOU: \n\t PROGRAM EXITED");
            
        }
        else {
            printf("\nERROR: Incorrect password");
        }
        
    } while (i != 5 || strcmp(pswrd,"12345") ==0);

    return 0;
}
