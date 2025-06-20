//
// Created by sarthakgiri on 20/6/25.
//
#include <stdio.h>

int main() {
    const float results[] = {0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1};
    int totalWins = 0;

    for (int i = 0; i < 28; i++) {
        if (results[i] == 1) {
            totalWins++;
        }
    }

    printf("%d", totalWins);

    return 0;
}
