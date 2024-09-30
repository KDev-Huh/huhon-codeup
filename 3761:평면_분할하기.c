// 무한한 평면 위에 n개의 무한한 직선들을 긋는다.

// 단, 모든 직선들은 평행하지 않고, 세 직선이 한 점에서 만나지 않는다.

// 그 후 생긴 평면들의 총 갯수를 구하여라.

// 수가 커질 수 있으니 137로 나눈 나머지를 출력하여라.

// 입력
// n이 입력된다. (0<=n<=10,000,000)

// 출력
// 평면들의 총 갯수를 137로 나눈 나머지를 출력한다.

// 동적할당으로 문제 풀이하기

#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d",&n);
    
    long long int memo_s[1000000]={1};
    long long int memo_big[11]={0};
    
    for(int i = 1; i <= n; i++)
    {
        if(i/1000000) {
            int before = i-1;
            if(before/1000000)
                memo_big[i%1000000] = memo_big[before%1000000] + i;
            else 
                memo_big[i%1000000] = memo_s[before] + i;
        }
        else {
            memo_s[i] = memo_s[i-1] + i;
        }
    }
    
    if(n/1000000)
        printf("%lld", memo_big[n]/137);
    else
        printf("%lld", memo_s[n]%137);
        
    return 0;
}