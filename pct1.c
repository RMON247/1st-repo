#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int level, n1, n2;

    printf("Choose level 1-3\n");
    scanf("%d", &level);

    if (level == 1) {
        n1 = (rand() % 10) + 1;
        printf("Guess the number between \033[0;34m1-10\033[0m\n");
    } else if (level == 2) {
        n1 = (rand() % 25) + 1;
        printf("Guess the number between \033[0;34m1-25\033[0m\n");
    } else if (level == 3) {
        n1 = (rand() % 50) + 1;
        printf("Guess the number between \033[0;34m1-50\033[0m\n");
    } else {
        printf("\033[0;31mInvalid level!\033[0m\n");
        return 0;
    }

    while (1) {
        scanf("%d", &n2);

        if (n1 == n2) {
            printf("\033[0;32mYou won!\033[0m\n");
            break;
        } else if (n2 == n1 - 1 || n2 == n1 + 1) {
            printf("\033[0;33mClose but far!\033[0m\n");
        } else if (n2 < n1) {
            printf("\033[0;31mToo low, try again!\033[0m\n");
        } else {
            printf("\033[0;31mToo high, try again!\033[0m\n");
        }
    }

    return 0;
}

