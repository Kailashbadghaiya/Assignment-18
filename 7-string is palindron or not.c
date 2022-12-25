#include<stdio.h>
#include<string.h>
void isPalindrome(char str[])
{
    int i = 0;
    int h = strlen(str) - 1;

    while (h > i)
    {
        if (str[i++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
         }
    }
    printf("%s is a palindrome\n", str);
}
int main()
{
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
}
