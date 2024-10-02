// 무한한 평면 위에 n개의 무한한 직선들을 긋는다.

// 단, 모든 직선들은 평행하지 않고, 세 직선이 한 점에서 만나지 않는다.

// 그 후 생긴 평면들의 총 갯수를 구하여라.

// 수가 커질 수 있으니 137로 나눈 나머지를 출력하여라.

// 입력
// n이 입력된다. (0<=n<=10,000,000)

// 출력
// 평면들의 총 갯수를 137로 나눈 나머지를 출력한다.

// 동적할당으로 문제 풀이하기

#include <iostream>
#include <vector>

int main()
{
    int n;
    
    std::cin >> n;
    std::vector<int> result(n, 1);
    
    int num;
    for(int i = 1; i <= n; i++) {
        result[i] = result[i-1] + i; 
    }
    
    printf("%d", result[n]%137);
    
    return 0;
}