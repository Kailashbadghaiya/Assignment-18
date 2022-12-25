#include<stdio.h>
#include<conio.h>
int main()
{
    char a[] = "my name is prateek jain" ;
    int count=0,i;

    for(i=0;a[i] != '\0';i++)
    {
        if(a[i] == ' ')
            count++ ;
    }
    count++ ;
    printf("Number of word = %d\n",count);
    return 0;
}
