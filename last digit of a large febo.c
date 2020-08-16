
#include <stdio.h>

int n, A[100000005];

int main() {
    A[0] = 0;
    A[1] = 1;
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    A[i] = (A[i - 1] + A[i - 2]) % 10;
    printf("Last digit of a fibo series:%d\n",A[n]);

    return 0;
}
