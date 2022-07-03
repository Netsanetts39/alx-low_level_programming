#include <stdio.h>

int main()
{
    for(int c = 'a'; c <= 'z'; c++)
    {
        c = tolower(c);
        putchar(c);
    }
    return 0;
}

        
