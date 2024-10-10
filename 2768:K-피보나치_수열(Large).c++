// 피보나치 수열은 우리가 잘 알고 있듯이, 앞의 두 항을 더해서 새로운 수를 구하는 수열이다.

// 이제 k-피보나치 수열을 정의하려고 한다.

// k-피보나치 수열은 앞의 k개의 항을 더해서 나온 수를 나열한 수열이다.

// (즉, 우리가 알고있는 피보나치 수열은 2-피보나치 수열인것이다.)

// 예를 들어, k=4이고 초항이 다음과 같이 4개 주어졌다고 하자.(반드시 k개의 초항이 입력된다.)

// 1 2 3 5 

// 그럼 5번째 항은 11, 6번째 항은 21 이 된다.

// 만약 6번째 항을 출력하라고 했다면 21을 출력한다.

// 이런 식으로 k-피보나치 수열의 n번째 항만 출력하는 프로그램을 작성하시오.

// 그런데 숫자가 너무 커질 수 있기 때문에 n번째 항에 100,007로 나눈 나머지를 출력하시오.

// 입력
// 첫째 줄에 k와 n이 입력된다. (2<=k<=10,000, k<=n<=100,000)

// 두번째 줄에 k개의 초항이 공백으로 구분되어 입력된다. ( 초항의 값의 범위는 1~10,000이다. )

// 출력
// k-피보나치 수열의 값의 n번째 항에 100,007을 나눈 나머지를 출력한다.

#include <iostream>
#include <vector>

int main() {
    int k, n;
    
    scanf("%d %d", &k, &n);
    
    std::vector<int> str(n+1);
    
    for(int i = 1; i <= k; i++) {
        std::cin >> str[i];
    }
    
    long long int hap = 0;
    for(int i = k+1; i <= n; i++) {
        hap = 0;
        for(int j = i-k; j < i; j++) {
            hap+=str[j]%100007;
        }
        str[i] = hap%100007;
    }
    
    // for(int i = 1; i <= n; i++) {
    //     printf("%d ", memo[i]);
    // }
    std::cout << str[n]%100007;
    
    return 0;
}
