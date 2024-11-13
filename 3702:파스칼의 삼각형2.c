// 다음과 같은 삼각형을 파스칼의 삼각형이라고 한다.

// 회전 변환된 이 삼각형에서 (r행, c열)의 값을 알 수 있는 프로그램을 작성하시오. 행과 열은 1부터 시작한다.

// 입력
// 자연수 r과 c가 입력된다. (1 ≤ r, c ≤ 50)

// 출력
// (r, c)의 원소 값을 100,000,000으로 나눈 나머지를 출력한다.

// 입력 예시   
// 3 2

// 출력 예시
// 3

#include <stdio.h>

int memo[51][51];

int f(int r, int c) {
    if(memo[r][c]) return memo[r][c];
    else if(r == 1 || c == 1) return memo[r][c] = 1;
    return memo[r][c] = (f(r, c-1) + f(r-1, c))%100000000;
}

int main()
{
    int r, c;
    
    scanf("%d %d", &r, &c);
    
    printf("%d", f(r, c));

    return 0;
}
