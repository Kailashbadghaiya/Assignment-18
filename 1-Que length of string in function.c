#include<stdio.h>
#include<conio.h>
int main()
{
    char s[20] ;
    int l ;
    printf("Enter your name ");
    gets(s) ;
    strlen(s) ;
    l=strlen(s) ;

    printf("length of %d is %d ",s,l);
    return 0;
}

