#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 3 == 0){
        printf("%d %d %d\n", 1, 1, n - 2);
    }
    if (n % 3 == 1){
        printf("%d %d %d\n", 1, 2, n - 3);
    }
    if (n % 3 == 2){
        printf("%d %d %d\n", 1, 2, n - 3);
    }
    return 0;
}