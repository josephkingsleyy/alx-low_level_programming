#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int min_coins(int cents) {
    if (cents < 0) {
        return 0;
    }

    int coins[5] = {25, 10, 5, 2, 1};
    int num_coins = 0;

    for (int i = 0; i < 5; i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            num_coins++;
        }
    }

    return num_coins;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
    } else {
        printf("%d\n", min_coins(cents));
    }

    return 0;
}
