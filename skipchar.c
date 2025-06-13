#include<stdio.h>
int main()
{
            for(char ch='a';ch<='z';ch++)
    {
            if(ch==99)
        {
            continue;
        }
            printf("%c",ch);
    }
            return 0;
}