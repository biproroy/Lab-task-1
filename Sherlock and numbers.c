#include <stdio.h>

int main() {
    int tests, n, k, p, x;
    printf("Enter number of tests case:\n");
    scanf("%d",&tests);
    while (tests--) {
        scanf("%d%d%d%",&n,&k,&p);
        for (int i = 0; i < k; i++) {
            scanf("%d",&x);
            if (x <= p)
             p++;
        }
        if (p > n)
            printf("Such number doesn't exists: -1");
        else
            printf("Smallest remaining number:%d\n",p);
    }

    return 0;
}
