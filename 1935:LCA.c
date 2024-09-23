// 21억이하로 구성된 완전 이진 트리가 있다.

// 노드의 번호는 루트 노드에서 부터 상->하, 좌->우방향으로 1,2,3,4,... 로 차례대로 부여 된다.

// 이 때 두 노드 a,b의 가장 가까운 공통 조상(LCA:LowestCommonAncestor) 노드를 찾아서 출력하시오.

// 예를 들어, 3번 노드와 4번 노드의 LCA는 1번 노드이다. 그리고 6번 노드와 7번 노드의 LCA는 3번 노드이다.

#include <stdio.h>

int find(int a, int b)
{
    if(a==b)
        return a;
    else if(a<b)
        return find(a, b/2);
    else
        return find(a/2, b);
}

int main()
{
    int a, b;
    
    scanf("%d %d",&a, &b);
    
    printf("%d",find(a,b));
    
    return 0;
}
