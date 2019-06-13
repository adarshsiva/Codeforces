#include <stdio.h>

int main() {
    int n; scanf("%d\n", &n);
    int sum1 = 0, sum2 = 0;
    for(int i = 0 ; i < n ; ++i) {
        int a; 
        scanf("%d ", &a);
        if(a > 0) sum1 += a;
        else 
        sum2 += a;
    }
    printf("%d\n", sum1-sum2);
    return 0;
}