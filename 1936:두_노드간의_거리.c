// 21억 이하로 구성된 완전 이진 트리가 있다. 노드의 번호는 루트 노드에서 부터 상->하, 좌->우방향으로 
// 1, 2, 3, 4,... 로 차례대로 부여 된다.

// 이 때 두 노드 a,b의 거리를 구하고자 한다.

// 예를 들어, 3번 노드와 4번 노드의 거리는 3이고, 4번 노드와 5번 노드의 거리는 2이다.입력

// 입력
// 두 노드 a,b가 입력된다.(1<=a,b<=2,100,000,000)

// 출력
// 두 노드 a,b의 거리를 출력한다.

#include <stdio.h>

int print(int a, int b, int total)
{
    return a == b ? total : (a > b ? print(a/2, b, total+1) : print(a, b/2, total+1));
}

int main(){
    int a, b;
   
    scanf("%d %d",&a, &b);
   
    printf("%d",print(a, b, 0));
   
    return 0;
}
