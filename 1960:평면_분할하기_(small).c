// 무한한 평면 위에 n개의 무한한 직선들을 긋는다.

// 단, 모든 직선들은 평행하지 않고, 세 직선이 한 점에서 만나지 않는다.

// 그 후 생긴 평면들의 총 갯수를 구하여라.

// 수가 커질 수 있으니 137로 나눈 나머지를 출력하여라.

// 입력
// n이 입력된다. (0<=n<=30,000)

// 출력
// 평면들의 총 갯수를 137로 나눈 나머지를 출력한다.

#include <stdio.h>
// 메모이제이션

int memo[30001] = {1};

int find(int n)
{
    if(memo[n])
        return memo[n];
    return memo[n] = find(n-1)+n; 
}

int main()
{
    int n;

    scanf("%d",&n);

    printf("%d",find(n)%137);

    
    return 0;
}
