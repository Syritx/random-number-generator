#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    time_t t;
    
    srand((unsigned)time(&t));
    
    // generates a number between 1 and 100
    int random = (rand() % 100) + 1;

    printf("X: %d\n", random);
}
