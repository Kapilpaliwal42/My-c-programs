#include<stdio.h>
#include<string.h>
int main()
{
    char word[30];
    int d,t,x;
    printf("enter a sentence/paragraph/word to encrypt:");
    fgets(word,sizeof(word),stdin);
    size_t len=strlen(word);
    if (word[len-1]=='\n')
    {
        word[len-1]='\0';
    }
    printf("\nenter degree of encryption:");
    scanf("%d",&d);
    
    d=d%26;
    t=d;
    for(int i=0;word[i]!='\0';i++)
    {
        if((word[i]+t)>90&&word[i]<91)
        {
            x=t-(90-word[i]);
            word[i]=64+x;
            
        }else if((word[i]+t)>122 && word[i]<123)
        {
            x=t-(122-word[i]);
            word[i]=96+x;
        }else if(word[i]==' ')
        {
            word[i]=' ';
        }
        else
        {
            word[i]+=t;
        }
    }
    printf("\n\t%s",word);
    return 0;
}