//
// Created by Sarthak Giri on 18-06-2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];

    fgets(input, sizeof(input), stdin);
    char *endptr;
    int stars = (int) strtol(input, &endptr, 10);

    while (stars > 0) {
        printf("*");
        stars--;
    }

    return 0;
}
