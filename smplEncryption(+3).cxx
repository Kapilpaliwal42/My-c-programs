#include<stdio.h>
int main()
{
    char word[20];
    printf("enter a sentence to encrypt:");
    fgets(word,sizeof(word),stdin);
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]=='x')
        {
            word[i]='a';
        }
        else if(word[i]=='y')
        {
            word[i]='b';
        }
        else if(word[i]=='z')
        {
            word[i]='c';
        }
        else if(word[i]=='X')
        {
            word[i]='A';
        }
        else if(word[i]=='Y')
        {
            word[i]='B';
        }
        else if(word[i]=='Z')
        {
            word[i]='C';
        }
        else if(word[i]==' ')
        {
            word[i]=' ';
        }
        else{
            word[i]+=3;
        }
    }
    printf("\t%s",word);
    return 0;
}