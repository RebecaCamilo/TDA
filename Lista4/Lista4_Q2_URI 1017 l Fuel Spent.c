//URI 1017 | Fuel Spent

#include <stdio.h>

int main() {

    int hour, speed;
    float litter;

    scanf("%d %d", &hour, &speed);
    litter = (speed * hour)/ 12.0;
    printf("%.3f\n", litter);

    return 0;
}


