#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="";
    char str2[]="";
    char s1;
    char s2;
    if(strlen(str1) != strlen(str2))
    {
        goto dl;
    }
    for(int i=0; i<strlen(str1); i++)
    {
        for(int j=strlen(str2)-(i+1);j==strlen(str2)-(i+1);j++)
        {
            s1=str1[i];
            s2=str2[j];
            //printf("s1=%c; s2=%c\n", s1, s2);
            if(s1 != s2)
            {
                goto dl;
            }
        }
    }
    
    printf("Both the Strings are the same");
    getchar();
    dl:
    printf("Strings aren't the same");
    getchar();
}
