//URI 1151 | Easy Fibonacci

#include <stdio.h>

int main() {

    int n = 1, m = 0, o = 0, N, i;
    scanf("%d", &N);

    for(i = 1; i < N; i++) {
        if(i % 2 == 1) {
            printf("%d ", o);
            o = m + n;
            m = o;
        } else if(i == 2){
            printf("%d ", o);
        } else if(i % 2 == 0) {
            printf("%d ", o);
            o = m + n;
            n = o;
        }
    }
    printf("%d\n", o);
    printf("");

    return 0;
}
