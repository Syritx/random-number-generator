#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    time_t t;
    
    srand((unsigned)time(&t));
    int xOffset = (rand() % 3) - 1;
    int zOffset = (rand() % 3) - 1;

    printf("X: %d\n", zOffset);
    printf("Z: %d\n", xOffset);
}
