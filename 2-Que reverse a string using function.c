#include<stdio.h>
#include<conio.h>
int main()
{
    char s[20] ;

    printf("Enter a string ");
    gets(s) ;
    strrev(s) ;

    printf("%s",s);
    return 0;
}
