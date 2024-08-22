#include <stdio.h>

int main()
{
    char str[27]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char a, b;
    
    scanf("%c %c",&a, &b);
    
    for(int i=a-97; i<=b-97;i++)
    {
        printf("%c ",str[i]);
    }
    
    return 0;
}