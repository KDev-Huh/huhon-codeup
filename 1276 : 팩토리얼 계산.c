#include <stdio.h>

int main()
{
    int n;
    long long int total = 1;
    
    scanf("%d",&n);
    
    for(int i=n;i>0;i--)
    {
        total*=i;
    }
    printf("%lld",total);
    
    
    return 0;
}
