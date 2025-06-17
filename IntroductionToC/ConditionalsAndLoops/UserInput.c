//
// Created by Sarthak Giri on 17-06-2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    // number of tickets ordered
    // take it from input
    char buffer[100];
    if (scanf("%99s", buffer) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    char *endptr;
    const int tickets = (int) strtol(buffer, &endptr, 10);
    if (*endptr != '\0') {
        printf("Invalid input.\n");
        return 1;
    }

    // price per ticket
    const float price = (float) 7.45;

    const float total = (float) tickets*price;

    printf("Total: %f", total);

    return 0;
}
