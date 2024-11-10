// nCr은 n개의 원소를 가지는 집합에서 r개의 부분 집합을 고르는 조합의 수를 말한다.

// nCr을 일반 공식은 다음과 같다.

// nCr=nPrr!=n!r!⋅(n−r)!5C2는 다음과 같이 구할 수 있다.
// 5C2=5!3!×2!=5×4×3×2×1(3×2×1)×(2×1)=10

// nCr을 구하는 프로그램을 작성하시오. 이 때 숫자가 너무 커질 수 있으므로 
// 100,000,007로 나눈 나머지를 출력하시오.

// 입력
// n과 r이 입력된다. 
// (1<=r<=n<=10,000)

// 출력
// nCr의 값을 100,000,007으로 나눈 나머지를 출력한다.

// 입력 예시   
// 5 2

// 출력 예시
// 10


// 동적계획법

#include <stdio.h>

int DP[10001][10001];

int main()
{
    int n, r;
    
    scanf("%d %d", &n, &r);
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= r; j++) {
            if(i==j) DP[i][j] = 1;
            else if(j==1) DP[i][j] = i;
            else DP[i][j] = (DP[i-1][j-1] + DP[i-1][j])%100000007;
        }
    }
    
    printf("%d", DP[n][r]);

    return 0;
}


// 메모이제이션

#include <stdio.h>

int memo[10001][10001];

int nCr(int n, int r) {
    if(memo[n][r]) return memo[n][r];
    if(n==r) return memo[n][r] = 1;
    if(r==1) return memo[n][r] = n;
    return memo[n][r] = (nCr(n-1, r-1) + nCr(n-1, r))%100000007;
}

int main()
{
    int n, r;
    
    scanf("%d %d", &n, &r);
    
    printf("%d", nCr(n, r));

    return 0;
}
